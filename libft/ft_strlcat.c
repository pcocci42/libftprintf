/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:17:01 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/04 10:36:17 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	long unsigned int	i;
	long unsigned int	j;
	long unsigned int	dlen;
	long unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0' && j < size)
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

/*int	main(void)
{
	char	dest[] = "ThaSUp";
	char	src[] = "E non so ch1 se1 t5";
	
	printf("%ld\n", ft_strlcat(dest, src, 6 ));
	printf("%s\n", dest);
}*/
