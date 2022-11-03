/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:02:01 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/13 13:02:20 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			if (s1[i] == '\0')
			{
				return (-(s1[i] - s2[i]));
			}
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			if (s2[i] == '\0')
			{
				return (-(s1[i] - s2[i]));
			}
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "uguale";
	char	str2[] = "uguzgge";
	
	printf("%d\n", ft_strncmp(str1, str2, 6));
	printf("%d\n", strncmp(str1, str2, 6));
}*/
