#include "ft_printf.h"
#include "../libft/libft.h"

void	nb_process_u(char c, int *n, va_list args)
{
	unsigned int	nb;

	if (c == 'u' )
	{
		nb = va_arg(args, unsigned int);
		if (nb >= 0)
			ft_putnbr_u(nb, n);
	}
}
