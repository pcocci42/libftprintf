#include "ft_printf.h"
#include "../libft/libft.h"

void	ft_putchar_n(char c, int *fd)
{
	write(1, &c, 1);
	*fd += 1;
}

void	ft_putstr_n(char *str, int *n)
{
	while (*str != '\0')
	{
		ft_putchar_n(*str, n);
		str++;
	}
}

void	ft_putnbr_u(int nb, int *fd)
{
	unsigned int	nbr;

	nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_n(nbr / 10, fd);
	ft_putchar_n((nbr % 10 + 48), fd);
}
