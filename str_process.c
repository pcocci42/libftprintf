/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:07:45 by pcocci            #+#    #+#             */
/*   Updated: 2022/11/17 11:07:46 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

void	str_process(char c, int *n, va_list args)
{
	char	*str;

	if (c == 's')
	{
		str = va_arg(args, char *);
		if (str == NULL)
			ft_putstr_n("(null)", n);
		else if (str != NULL)
		{
			while (*str != '\0')
			{
				ft_putchar_n(*str, n);
				str++;
			}
		}
	}
}
