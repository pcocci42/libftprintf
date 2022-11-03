#include "libftprintf.h"
#include "../libftprintf/libft/libft.h"


t_flags check_flag_errors(t_flags flags)
{   
    if (flags.flag_zero == 1 && flags.flag_minus == 1)
        flags.flag_zero = 0;
    if (flags.flag_plus == 1 && flags.flag_space == 1)
        flags.flag_space = 0;
    if (flags.point == 1 && flags.flag_minus == 1 && flags.flag_space == 0)
        flags.flag_minus = 0;
    return (flags);
}

t_flags new_flags()
{
     t_flags flags;

    flags.flag_hash = 0;
    flags.flag_minus = 0;
    flags.flag_plus = 0;
    flags.flag_space  = 0;
    flags.flag_zero = 0;
    flags.index = 0;
    flags.width = 1;
    flags.state = 0;
	flags.point = 0;
    flags.precision = 0;
    
    return (flags);
}

t_flags   check_flags(const char *format, t_flags flags)
{	
    int	i;

    i = flags.index;
    while (format[i] != '%')
    {
        i++;
    }
    if (format[i] == '%')
            i++;
    while (format[i] == '0' || format[i] == '-' || format[i] == ' ' || format[i] == '+' || format[i] == '#' || format[i] ==  '.' || (format[i] >= '1' && format [i] <= '9'))
    {
		if (format[i] == '.')
            {
                flags.point += 1;
                flags.precision = 1;
                i++;
            }
        if (format[i] == '0')
            {
                flags.flag_zero += 1;
                i++;
            }
        if (format[i] == '#')
            {
                flags.flag_hash += 1;
                i++;
            }
        if (format[i] == ' ')
            {
                flags.flag_space += 1;
                //flags.width += 1;
                i++;
            }
        if (format[i] == '-')
            {
                flags.flag_minus += 1;
                if (flags.precision == 1)
                    flags.flag_minus += 1;
                i++;
            }
        if (format[i] == '+')
            {
                flags.flag_plus += 1;
                i++;
            }
        if (format[i] >= '1' && format [i] <= '9')
                i++;
    }
    //printf("%d\n", i);
    //if (format[i] != '0' || format[i] != '-' || format[i] != ' ' || format[i] != '+' || format[i] != '#' || format[i] != '.' )
        //i++;
    return (flags);
}

int format_processor(const char *format, t_flags flags, int *n)
{
    //while (format[flags.index] != '\0')
    {
        while (format[flags.index] != '%' && format[flags.index] != '\0')
        {     
            {
                ft_putchar_n(format[flags.index], n);
                if (format[flags.index] == '%')
                {
                    flags.state = 1;
                    flags.index++;
                    break ;
                }
                flags.index++;
            }
        }
    }
        return (flags.index);
}

int state_processor(const char *format, t_flags flags)
{
    if  (format[flags.index] == '%')
        flags.state = 1;
    return (flags.state);
}
int width_increment(t_flags flags)
{   
    return (flags.width);
}

t_flags    width_adjust(t_flags flags, int nb, const char *format)
{
    char    *num;
    int adjust;
    int i; 

    i = flags.index;
    num = ft_itoa(nb);
    adjust = ft_strlen(num);
    if (adjust > 1)
    {
        if (flags.width == 0)
            flags.width = 0;
        else if ((flags.width > adjust || flags.width == adjust) && flags.point == 0)
            flags.width -= adjust;
        else if ((flags.width > adjust || flags.width == adjust) && flags.point == 1)
            flags.width -= adjust;
        else if (flags.width < adjust)
            flags.width = 0;
    }
    if (flags.point == 1 && flags.width > 0)
    {
        flags.flag_zero = 1;
        if (flags.flag_minus > 0)
            flags.flag_minus -= 1;
        if (flags.flag_plus == 1 && flags.flag_space == 0)
            flags.width++;
    }
    printf("index is %d\n", i);
    printf("%c\n", format[i]); 
    printf("flags\n");
    printf(" 0 is %d\n", flags.flag_zero);
    printf(" + is %d\n", flags.flag_plus);
    printf(" - is %d\n", flags.flag_minus);
    printf("space is %d\n", flags.flag_space);
    printf("point is %d\n", flags.point);
    printf("width %d\n", flags.width);
    return (flags);
}

int    width_processor(const char *format,int i, t_flags flags)
{
    char    *width;
    int     j;

    width  = malloc(sizeof(char *));
    j =  0;
    while (format[i] == '0' || format[i] == '-' || format[i] == ' ' || format[i] == '+' || format[i] == '#' || format[i] == '.')
        i++;
    while (format[i] >= '1' && format [i] <= '9')
    {
        width[j++] = format[i++];
    }
    flags.index = i;
    flags.width = ft_atoi((char *) width);
    if (flags.width == 0 && flags.state == 1)
        flags.width = 0;
	//flags.width = width_increment(flags);

    return  (flags.width);
}



int index_processor(const char *format, int i)
{
        while (format[i] == '0' || format[i] == '-' || format[i] == ' ' || format[i] == '+' || format[i] == '#' || format[i] ==  '.' || (format[i] >= '1' && format [i] <= '9'))
            i++;
    //printf("%d\n", i);
    return (i);
}

void    char_width(t_flags flags, char c)
{
    while (flags.width > 1)
        {
            ft_putchar_fd(' ', 1);
            flags.width--;
        }
        ft_putchar_fd(c, 1);
}

void    char_width_minus(t_flags flags, char c)
{
    ft_putchar_fd(c, 1);
        while (flags.width > 1)
        {
            ft_putchar_fd(' ', 1);
            flags.width--;
        }
}

void    char_zero(t_flags flags, char c)
{
    while (flags.width > 1)
        {	
			ft_putchar_fd('0', 1);
            flags.width--;
        }
        ft_putchar_fd(c, 1);
}

void   char_processor(t_flags flags, va_list args, int *n)
{   
    char c;

    c  = va_arg(args, int);
    if (flags.flag_minus == 0 && flags.width == 1)
        ft_putchar_n(c, n); 
    if (flags.flag_minus == 0 && flags.width > 1 && flags.flag_zero == 0)
        char_width(flags, c);
    if (flags.flag_minus == 1 && flags.width > 1)
        char_width_minus(flags, c);
    if (flags.flag_zero == 1 && flags.width > 1)
    	char_zero(flags, c);
}

t_flags nb_basic(t_flags flags,int nb, int *n)
{
    if (flags.width == 0 && flags.flag_plus == 0 && flags.flag_zero == 0)
        {
            ft_putnbr_n(nb, n);
            flags.index++;
        }
    return (flags);
}

t_flags nb_space(t_flags flags, int *n)
{
    if (flags.point == 1 && flags.flag_space == 0 && flags.flag_minus == 1 && flags.flag_plus == 0 && flags.flag_zero == 1)
    {   
        while (flags.width > 1)
        {   
            //printf("while width %d\n", flags.width);
            ft_putchar_n(' ', n);
            flags.width--;
        }
    }
    if (flags.point == 1 && flags.flag_space == 1 && flags.flag_minus == 0 && flags.flag_plus == 0 && flags.flag_zero == 1)
    { 
        ft_putchar_n(' ', n);
    }
    if (flags.point == 1 && flags.flag_space == 1 && flags.flag_minus == 0 && flags.width == 0 && flags.flag_plus == 0 && flags.flag_zero == 0)
    { 
        return (flags);
    }
    if (flags.point == 1 && flags.flag_space == 1 && flags.flag_minus == 1 && flags.width == 0 && flags.flag_plus == 0 && flags.flag_zero == 0)
    { 
        ft_putchar_n(' ', n);
    }
    if (flags.flag_zero == 0 && flags.point == 0)
    {   
        if (flags.flag_space == 1 && flags.width == 0)
            flags.width++;
        if (flags.flag_plus == 0)
        {
            while (flags.width > 0)
            {
                ft_putchar_n(' ', n);
                flags.width--;
            }
            flags.flag_space = 0;
        }
        if (flags.flag_plus == 1 && flags.width > 0)
        {
            while (flags.width > 1)
            {
                ft_putchar_n(' ', n);
                flags.width--;
            }
        }
        flags.flag_space = 0;
    }
    /*if (flags.point == 1 && flags.flag_space == 1)
        ft_putchar_n(' ', n);*/
    return (flags);
}

t_flags nb_plus(t_flags flags, int *n, int nb)
{   
    if (nb > 0)
    {
        if (flags.flag_plus == 1 && flags.flag_space == 0)
        {   
            ft_putchar_n('+', n);
            if (flags.width > 0)
                flags.width--;
            //printf("flags width plus %d\n", flags.width);
        }
    }
    if (nb < 0)
        if (flags.width > 0)
                flags.width--;
    flags.flag_plus = 0;
    return (flags);

}

t_flags nb_minus(t_flags flags, int nb, int *n)
{   
    if (flags.width > 0)
    {
        if (flags.flag_space == 0)
        {
            flags = nb_plus(flags, n, nb);
            ft_putnbr_n(nb, n);
            flags = nb_space(flags, n);
        }
        if (flags.flag_space == 1)
        {   
            ft_putchar_n(' ', n);
            flags.width--;
            flags = nb_plus(flags, n, nb);
            ft_putnbr_n(nb, n);
            flags = nb_space(flags, n);
        }
    }
    else 
    {
        flags = nb_space(flags, n);
        flags = nb_plus(flags, n, nb);
        ft_putnbr_n(nb, n);
    }
    flags.index++;
    return (flags); 
}

t_flags nb_zero(t_flags flags, int *n)
{   
    if (flags.flag_zero == 1 && flags.flag_plus == 0)
    {
        while (flags.width > 0)
        {
            ft_putchar_n('0', n);
            flags.width--;
        }
    }
    flags.flag_zero = 0;
    return (flags);
}

t_flags nb_positive(t_flags flags, int nb, int *n)
{
    if (flags.flag_minus == 0)
    {   
            flags = nb_space(flags, n);
            //printf("width is %d\n", flags.width);
            flags = nb_plus(flags, n, nb);
            //printf("width is %d\n", flags.width);
            flags = nb_zero(flags, n);
            //printf("width is %d\n", flags.width);
            flags = nb_basic(flags, nb, n);
    }
    if (flags.flag_minus == 1)
    {
        flags = nb_minus(flags, nb, n);
    }
    return (flags);

}
t_flags    nb_processor(t_flags flags, va_list args, int *n, const char *format)
{
    int nb;
    int fine;

    fine = 1;
    nb = va_arg(args, int);
    flags = width_adjust(flags, nb, format);
    if (nb > 0)
    {
        flags = nb_positive(flags, nb, n);
    }
    return (flags);
}

void    ptr_processor(va_list args, t_flags flags)
{
    void	*p;

	p = va_arg(args, void *);
	print_address_hex(p, flags);
}

t_flags    check_case(const char *format, t_flags flags, va_list args, int *n)
{	
	int	i;
	i = flags.index;
    if (format[i] == 'd' || format[i] == 'c' || format[i] == 'p' || format[i] == 's' || format[i] == 'i' ||
    format[i] == 'u' || format[i] == 'x' || format[i] == 'X')
    {
        if (format[i] == 'c')
        {
            char_processor(flags, args, n);
            flags.index++;
        }
        if (format[i] == 'd')
        {   
            nb_processor(flags, args, n, format);
            flags.index++;
        }
        if (format[i] == 'p')
        {   
            ptr_processor(args, flags);
            flags.index++;
        }
    }
    return (flags);
}

t_flags	flag_reset(t_flags flags)
{
	flags.flag_minus = 0;
	flags.flag_hash = 0;
	flags.flag_zero = 0;
	flags.flag_space = 0;
	flags.flag_plus = 0;
	flags.point = 0;
	flags.width = 0;
    flags.precision = 0;

	return (flags);
}

int   vft_printf(const char *format, va_list args, int *n)
{
    t_flags flags;

    flags = new_flags();
    flags = check_flags(format, flags);
    while (flags.index < ((int)ft_strlen(format)))
    {
        if (flags.state == 0)
        {   
			flags = flag_reset(flags);
			flags = check_flags(format, flags);
            //printf("flag width is %d\n", flags.width);
			//flags = check_flag_errors(flags);
            //printf("flag width is %d\n", flags.width);
            flags.index = format_processor(format, flags, n);
            flags.state = state_processor(format, flags);
            flags.index += 1;
            //printf("flag minus is %d\n", flags.flag_minus);
        }
		//printf("%d\n", flags.flag_plus);
        if (flags.state == 1)
        {	
            //printf("flag 0 is %d\n", flags.flag_zero);
            //printf("flag hash is %d\n", flags.flag_hash);
            //printf("flag space is %d\n", flags.flag_space);
            //printf("flag minus is %d\n", flags.flag_minus);
            //printf("flag plus is %d\n", flags.flag_plus);
            //printf("flag point is %d\n", flags.point);
            //printf("width is %d\n", flags.width);
            flags = check_flag_errors(flags);
            flags.width = width_processor(format, flags.index, flags);
            //printf("width is %d\n", flags.width);
            flags.index = index_processor(format, flags.index);
            flags = check_case(format,flags, args, n);
            //printf("%d\n", flags.index);
			flags.state = 0;
        }
    }
	//printf("%d\n", flags.index);
	//printf("%d\n", flags.flag_plus);
	return (0);
}

int ft_printf(const char *format, ...)
{
    int n;
    va_list args;
	n = 0;

    va_start(args, format);
    vft_printf(format, args, &n); //args);
    va_end(args);

    return (n);
}

int main()
{
    int nb;
    nb = 100;
    void    *vv;
	void    *cc;
	vv = NULL;
	cc = (void *)"cazzo";

    ft_printf("vuoto %d\n", nb);
    ft_printf("width only %4d\n", nb);
    ft_printf("+ %+d\n", nb);
    ft_printf("+3 %+3d\n", nb);
    ft_printf("+7 %+7d\n", nb);
    ft_printf("- width 3 %-3d cazzo \n", nb);
    ft_printf("space% d\n", nb);
    ft_printf("space width 5% 5d\n", nb);
    ft_printf("0 width 3%03d\n", nb);
    ft_printf("00 width %00d\n", nb);
    ft_printf("point %.d\n", nb);
    ft_printf("point width %.6d\n", nb);
    ft_printf("hash width %#5d\n", nb);
    ft_printf("- width plus %-+6d cazzo \n", nb);
    ft_printf("- width 3%-03d cazzo \n", nb);
    ft_printf("- width 7%-07d cazzo \n", nb);
    ft_printf("- width space %- d cazzo \n", nb);
    ft_printf("- width space 7%- 7d cazzo \n", nb);
    ft_printf("- point %-.d cazzo \n", nb);
    ft_printf("- point 7%-.7d cazzo \n", nb);
    ft_printf("- plus zero 3 %+03d cazzo \n", nb);
    ft_printf("plus space %+ d \n", nb);
    ft_printf("plus space 4 %+ 4d \n", nb);
    ft_printf("plus point %+.d \n", nb);
    ft_printf("plus point 5 %+.5d \n", nb);
    ft_printf("zero point %.0d \n", nb);
    ft_printf("zero point 6 %.06d \n", nb);
    ft_printf("space point % .d \n", nb);
    ft_printf("space point 5% .5d \n", nb);
    ft_printf("- space point %- .d cazzo \n", nb);
    ft_printf("- space point 5%- .5d cazzo \n", nb);
    ft_printf("- space 0 %- 0d cazzo \n", nb);
    ft_printf("- space zero 3%- 03d cazzo \n", nb);
    ft_printf("- point plus 3%+-.4d cazzo \n", nb);
    ft_printf("- zero plus 4%-+04d cazzo \n", nb);
    ft_printf("- zero plus %-+0d cazzo \n", nb);
    ft_printf("- zero space plus point%- +.0d cazzo \n", nb);
    ft_printf("- zero space plus point 5%- +.05d cazzo \n", nb);
    ft_printf("- zero space point%- .0d cazzo \n", nb);
    ft_printf("- zero space point 5%- .05d cazzo \n", nb);
    ft_printf("zero plus point 5%+.05d cazzo \n", nb);
    ft_printf("zero plus point 5%+ .05d cazzo %-+ .0d\n", nb, nb);
    ft_printf("zero plus point 5%+ .05d cazzo %-+ .05d\n", nb, nb);
    ft_printf("zer0 - plus point 5 %-+.05d \n", nb);
    ft_printf("zero plus point space - 5%-+ .5d cazzo %- .0+d\n", nb, nb);
    ft_printf("- zero plus point 5%+ .-05d cazzo %. 0+d\n", nb, nb);
    ft_printf("- zero plus point 5%+ .0-5d cazzo %. 0+6d bo\n", nb, nb);
    ft_printf("- zero plus point 5%+ .0-5d cazzo %. 06+d bo\n", nb, nb);
    //ft_printf("- zero plus point 5%+ .0-5d cazzo %. 40+d\n", nb, nb);

    return (0);
}
