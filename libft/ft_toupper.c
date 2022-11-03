/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:07:17 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/04 11:12:16 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		ch = ch - 32;
	}
	else
		return (ch);
	return (ch);
}

/*int main() {
    char c;

    c = 'm';
    printf("%c -> %c", c, ft_toupper(c));

    c = 'D';
    printf("\n%c -> %c", c, ft_toupper(c));

    c = '9';
    printf("\n%c -> %c", c, ft_toupper(c));
    return 0;
}*/
