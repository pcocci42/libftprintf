/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:25:34 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/13 13:50:38 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strminore(const char str1, const char str2)
{
	return (-(str1 - str2));
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*str1;
	const char	*str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] > str2[i])
		{
			if (str1[i] == '\0')
				return (-(str1[i] - str2[i]));
			return (str1[i] - str2[i]);
		}
		else if (str1[i] < str2[i])
		{
			if (str2[i] == '\0')
				return (ft_strminore(str1[i], str2[i]));
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "t\200";
	char	str2[] = "t\0";
	
	printf("%d\n", ft_memcmp(str1, str2, 2));
	printf("%d\n", memcmp(str1, str2, 2));
}*/
