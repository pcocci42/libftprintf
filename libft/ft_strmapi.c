/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:28:55 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/13 13:28:56 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char					*s1;
	long unsigned int		len;
	long unsigned int		i;

	i = 0;
	len = ft_strlen((char *)s);
	s1 = (char *)malloc((len + 1) * sizeof(char));
	if (s1 == 0)
		return (0);
	while (i < len)
	{
		s1[i] = f(i, s[i]);
		i ++;
	}
	s1[i] = '\0';
	return (s1);
}

/*char	test(unsigned int i, char str)
{
	return (str++);
}
int	main(void)
{
	char str[10] = "hello";
	printf("Before: %s\n", str);
	
	char *result = ft_strmapi(str, mod);
	printf("After: %s\n", result);
	
	return 0;
}*/
