/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:27:38 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/03 15:38:30 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char		*str;
	size_t		i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

/*int main () {
   char str[] = "";
   

   //strcpy(str,"");
   //puts(str);

   ft_memset(str,'c',4);
   puts(str);

   memset(str, 'c', 4);
   puts(str);
   return(0);
}*/
