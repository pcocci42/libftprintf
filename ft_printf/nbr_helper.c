#include "ft_printf.h"
#include "../libft/libft.h"

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

int	checkerror(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while ((size_t)j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base, int *n)
{
	long	nb;
	int		len;
	int		error;

	error = checkerror(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar_n('-', n);
			nb *= -1;
		}
		if (nb < len)
			ft_putchar_n(base[nb], n);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base, n);
			ft_putnbr_base(nb % len, base, n);
		}
	}
}

void	ft_putnbr_base_u(unsigned int nbr, char *base, int *n)
{
	unsigned int	nb;
	unsigned int	len;
	int				error;

	error = checkerror(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < len)
			ft_putchar_n(base[nb], n);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base, n);
			ft_putnbr_base(nb % len, base, n);
		}
	}
}
