/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:40:16 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/13 13:40:17 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*int main(void){
	 const char *a1 = "bed";
	 printf("1: %s\n", ft_strtrim("bedhelbedlobed", a1));
	 const char *a2 = "bed";
	 printf("2: %s\n", ft_strtrim("bedbedhelbedlobedbed", a2));
	 const char *a4 = "v v v";
	 printf("4: %s\n", ft_strtrim("v vhellov v", a4));
	 const char *a5 = "1234567";
	 const char *a6 = "g";
	 printf("6: %s\n", ft_strtrim("gbgegdghgeglgbgegdglgogbgegdg", a6));
}
*/
