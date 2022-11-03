/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:47:08 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/13 12:31:43 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_size(int n)
{
	if (n > 0)
		return (0);
	else
		return (1);
}

size_t	ft_countsize(int n, size_t size)
{
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = ft_size(n);
	if (nbr < 0)
		nbr = -nbr;
	size = ft_countsize(n, size);
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}

/*int main(void)
{
	printf(" 0\n\"%s\"\n\n", ft_itoa(0));
	printf(" -0\n\"%s\"\n\n", ft_itoa(-0));
	printf(" 123\n\"%s\"\n\n", ft_itoa(123));
	printf(" -123\n\"%s\"\n\n", ft_itoa(-123));
	printf(" -321\n\"%s\"\n\n", ft_itoa(-321));
	printf(" -12345\n\"%s\"\n\n", ft_itoa(-12345));
	printf(" 123456789\n\"%s\"\n\n", ft_itoa(123456789));
	printf(" -123456789\n\"%s\"\n\n", ft_itoa(-123456789));
	printf(" 2147483647\n\"%s\"\n\n", ft_itoa(2147483647));
	printf(" -2147483648\n\"%s\"\n\n", ft_itoa(-2147483648));
	printf(" 0000000000\n\"%s\"\n\n", ft_itoa(0000000000));
	printf(" -214748-3648\n\"%s\"\n\n", ft_itoa(-214748-3648));
	printf(" -2+147483648\n\"%s\"\n\n", ft_itoa(-2+147483648));
	return (0);
}*/
