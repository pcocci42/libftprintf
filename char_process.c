/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:05:19 by pcocci            #+#    #+#             */
/*   Updated: 2022/11/17 11:05:21 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

void	char_process(char c, int *n, va_list args)
{
	char	ch;

	if (c == 'c')
	{
		ch = va_arg(args, int);
		ft_putchar_n(ch, n);
	}
}
