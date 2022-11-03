/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:17:48 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/05 10:41:51 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	whitespaces(const char *str)
{
	int	i;

	i = 0;
	if (str[i] == 43 && str[i + 1] != 45)
		i++;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '0')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = whitespaces(str);
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

/*int				 main()
{
	
		printf("%d\n", ft_atoi("0"));

		printf("%d\n",ft_atoi("546:5"));

		printf("%d\n",ft_atoi("-4886"));

		printf("%d\n",ft_atoi("+548"));

		printf("%d\n",ft_atoi("054854"));

		printf("%d\n",ft_atoi("000074"));
	
		printf("%d\n",ft_atoi("+-54"));
	
		printf("%d\n",ft_atoi("-+48"));

		printf("%d\n",ft_atoi("--47"));
	
		printf("%d\n",ft_atoi("++47"));
	
		printf("%d\n",ft_atoi("+47+5"));
	
		printf("%d\n",ft_atoi("-47-5"));
	
		printf("%d\n",ft_atoi("\e475"));
	
		printf("%d\n",ft_atoi("\t\n\r\v\f  469 \n"));
	
		printf("%d\n",ft_atoi("-2147483648"));
	
		printf("%d\n",ft_atoi("2147483647"));

		printf("%d\n",ft_atoi("\t\n\r\v\fd469 \n"));
	
		printf("%d\n",ft_atoi("\n\n\n  -46\b9 \n5d6"));
	
		printf("%d\n",ft_atoi(""));
	return (0);
}
*/