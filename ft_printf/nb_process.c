#include "ft_printf.h"
#include "../libft/libft.h"

void	nb_process(char c, int *n, va_list args)
{
	int	nb;

	if (c == 'd' || c == 'i')
	{
		nb = va_arg(args, int);
		ft_putnbr_n(nb, n);
	}
}
