/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:30:19 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/13 13:30:20 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	new_str = (char *)malloc(len + 1);
	if (!s || !new_str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

/*int	main(void)
{
    char s1[] = "hello my loco";
    printf("%s\n", ft_substr(s1, 25, 5));
    
    char s2[] = "hello my loco";
     printf("%s\n", ft_substr(s2, 5, 2));
    
     char s3[] = "hello my loco";
     printf("%s\n", ft_substr(s3, 4, 15));
    
     char s4[] = "hello my loco";
	 printf("%s\n", ft_substr(s4, 0, 13));

	printf("%s\n", ft_substr("tripouille", 0, 42000));
	return (0);
}*/
