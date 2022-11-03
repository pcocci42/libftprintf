/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:55:29 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/13 13:51:09 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !new_str)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*int main(void)
{
	char	s1[] = "hello";
	char	s2[] = " you";
	printf("%s\n", ft_strjoin(s1, s2));
	
	// char	as1[] = "lorem ipsum";
	// char	as2[] = "dolor sit amet";
	// as1[0] = '\0';
	// printf("%s\n", ft_strjoin(as1, as2));
	
	// char	ss1[] = "lorem ipsum";
	// char	ss2[] = "dolor sit amet";
	// ss2[0] = '\0';
	// printf("%s\n", ft_strjoin(ss1, ss2));
	
	// char	ws1[] = "lorem ipsum";
	// char	ws2[] = "dolor sit amet";
	// ws1[0] = '\0';
	// ws2[0] = '\0';
	// printf("%s\n", ft_strjoin(ws1, ws2));
	return (0);
}*/
