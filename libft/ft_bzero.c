/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:40:25 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/03 15:47:09 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*s;

	s = str;
	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}

/*int main ()
{
   char str[50];

   strcpy(str,"This Is A sTRING BRO");
   puts(str);

   ft_bzero(str, 4);
   puts(str);

   bzero(str, 4);
   puts(str);
   return(0);
}*/
