/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:07:00 by pcocci            #+#    #+#             */
/*   Updated: 2022/11/17 11:07:01 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

void	nb_process(char c, int *n, va_list args)
{
	int	nb;

	if (c == 'd' || c == 'i')
	{
		nb = va_arg(args, int);
		ft_putnbr_n(nb, n);
	}
}
