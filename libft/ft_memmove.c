/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:24:04 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/13 13:38:30 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if ((size_t)dst - (size_t)src < len)
	{	
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*{
	char *d = dst;
	const char *s = src;
	const char *lasts;
	char *lastd;
	lasts = s + (len-1);
	lastd = d + (len-1);
  if (d < s)
    while (len--)
      *d++ = *s++;
  else
    {
      while (len--)
        *lastd-- = *lasts--;
    }
  return (lastd);
}*/

/*int main () {
    char	src[] = "cazzo";
	char	dest[] = "mammamia" ;

   printf("Before memmove dest = %s\n", dest);
   ft_memmove(dest, src, 6);
   printf("After memmove dest = %s\n", dest);

   return(0);
}*/
