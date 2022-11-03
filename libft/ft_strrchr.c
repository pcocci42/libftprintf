/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:24:50 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/04 12:32:09 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*p;

	p = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			p = str;
		str++;
	}
	if ((char)c == '\0')
		p = str;
	return ((char *)p);
}

/*int main () {
   const char str[] = "Ma senti un po'. U 0K.>>>@y???";
   const char ch = '\'';
   char *ret;
   char	str3[]= "bonjourno";
   char str2[] = "bonjour";

	ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
