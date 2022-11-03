/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:54:42 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/03 15:59:31 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *source, size_t n)
{
	char			*dest;
	const char		*src;
	size_t			i;

	i = 0;
	dest = d;
	src = source;
	if (!d && !source)
		return (0);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (d);
}

/*int main () {
   const char src[50] = "Spariro sono una M8nstar";
   char dest[50];
   strcpy(dest,"W()AH");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}*/
