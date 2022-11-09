#include "ft_printf.h"
#include "../libft/libft.h"

void	hex_process(char c, int *n, va_list args)
{
	int	nb;

	if (c == 'x' || c == 'X')
	{
		nb = va_arg(args, int);
		if (c == 'x')
			ft_putnbr_base_u(nb, "0123456789abcdef", n);
		else if (c == 'X')
			ft_putnbr_base_u(nb, "0123456789ABCDEF", n);
	}
}
