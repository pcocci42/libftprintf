#include "libftprintf.h"
#include "../libftprintf/libft/libft.h"

char    hex_digit(int nb)
{
    if (nb >= 0 && nb < 10)
        return ('0'+ nb);
    else 
        return ('a' + nb - 10);
}



void    print_address_hex(void *p0, t_flags flags)
{
    int i;
    uintptr_t p;
    int j;
    char    *hex;

    hex = malloc(sizeof(char *) * 10);
    j = 0;
    p = (uintptr_t)p0;
    i = (sizeof(p) << 3) - 4;
    ft_putchar_fd('0', 1);
    ft_putchar_fd('x', 1);
    hex_null(p0, flags);
    if (hex_null(p0, flags) == 0)
    {
        while (i >= 0)
        {   
            hex[j] = hex_digit((p >> i) & 0xf);
            i -= 4;
            j++; 
        }
        while (*hex == '0')
            hex++;
        ft_putstr_fd(hex, 1);
    }
}

int     hex_null(void *p0, t_flags flags)
{
    if (flags.point == 0)
    {
        if (p0 == NULL)
            ft_putchar_fd('0', 1);
            return (0);
    }
    return (1);
}

void	ft_putchar_n(char c, int *fd)
{
	write(1, &c, 1);
    *fd += 1;
}

void	ft_putnbr_n(int nb, int *fd)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar_n('-', fd);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_n(nbr / 10, fd);
	ft_putchar_n((nbr % 10 + 48), fd);
}