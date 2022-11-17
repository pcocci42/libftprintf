/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:07:36 by pcocci            #+#    #+#             */
/*   Updated: 2022/11/17 11:07:36 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

void	ptr_process(char c, int *n, va_list args)
{
	void	*p0;

	if (c == 'p')
	{
		p0 = va_arg(args, void *);
		print_address_hex(p0, n);
	}
}
