/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:06:33 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/13 13:37:15 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	chr;

	s = (unsigned char *)str;
	chr = (unsigned char)c;
	while (str && n > 0)
	{
		if (*s != chr)
			s++;
		else if (*s == chr)
		{
			return (s);
			break ;
		}
		n--;
	}
	return (NULL);
}

/*int main()
{	
	char *loco = ft_memchr("bonjourno", 'n', 5);
	 printf("%s\n", loco);
	char *foco = memchr("bonjourno", 'n', 5);
	printf("%s\n", foco);
	 char *aloco = ft_memchr("bonjour", 'o', 7);
	 printf("%s\n", aloco);
	 char *afoco = memchr("bonjour", 'o', 7);
	 printf("%s\n", afoco);
    return (0);
}*/
