#include "ft_printf.h"
#include "../libft/libft.h"

void	char_process(char c, int *n, va_list args)
{
	char	ch;

	if (c == 'c')
	{
		ch = va_arg(args, int);
		ft_putchar_n(ch, n);
	}
}
