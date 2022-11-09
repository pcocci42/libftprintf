#include "ft_printf.h"
#include "../libft/libft.h"

void	percent_process(char c, int *n)
{
	if (c == '%')
	{
		ft_putchar_n('%', n);
	}
}
