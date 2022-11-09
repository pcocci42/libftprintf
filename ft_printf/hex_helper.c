#include "ft_printf.h"
#include "../libft/libft.h"

char	hex_digit(int nb)
{
	if (nb >= 0 && nb < 10)
		return ('0' + nb);
	else
		return ('a' + nb - 10);
}

int	hex_null(void *p0, int *n)
{
	if (p0 == NULL)
	{
		ft_putchar_n('0', n);
		return (0);
	}
	return (1);
}

void	put_address(int j, int *n, char *hex)
{
	while (hex[j] == '0')
		j++;
	while (hex[j] != '\0')
	{
		ft_putchar_n(hex[j], n);
		j++;
	}
}

void	print_address_hex(void *p0, int *n)
{
	int			i;
	int			j;
	char		*hex;
	uintptr_t	p;

	hex = malloc(sizeof(char *));
	j = 0;
	p = (uintptr_t)p0;
	i = (sizeof(p) << 3) - 4;
	ft_putchar_n('0', n);
	ft_putchar_n('x', n);
	hex_null(p0, n);
	while (i >= 0)
	{
		hex[j] = hex_digit((p >> i) & 0xf);
		j++;
		i -= 4;
	}
	j = 0;
	put_address(j, n, hex);
	free(hex);
}
