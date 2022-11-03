/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:22:15 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/13 13:32:45 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*dup;

	i = 0;
	len = ft_strlen(s);
	dup = (char *)malloc((len + 1) * (sizeof(char)));
	if (!dup)
		return (NULL);
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*int	main(void)
{
	char	str1[] = "\0";
	char	*dup;
	
	dup = strdup(str1);
	printf("%s\n", strdup(str1));
	printf("%s\n", dup);
	free(dup);
}*/

/*void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main()
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*str_dup;

		if (!(str_dup = ft_strdup(str)))
			ft_print_result("NULL");
		else
			ft_print_result(str_dup);
		if (str_dup == str)
			ft_print_result("\nstr_dup's adress == str's adress");

	return (0);
}
*/