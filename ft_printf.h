/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:05:58 by pcocci            #+#    #+#             */
/*   Updated: 2022/11/17 11:05:59 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

void	print_address_hex(void *p0, int *n);
void	ft_putchar_n(char c, int *fd);
void	ft_putnbr_n(int nb, int *fd);
void	vft_printf(const char *format, va_list args, int *n);
void	ft_putstr_n(char *str, int *n);
void	ft_putnbr_base(int nbr, char *base, int *n);
int		checkerror(char *str);
void	ft_putnbr_u(int nb, int *fd);
void	ft_putnbr_base_u(unsigned int nbr, char *base, int *n);
int		ft_printf(const char *format, ...);
int		hex_null(void *p0, int *n);
void	put_address(int j, int *n, char *hex);
void	hex_process(char c, int *n, va_list args);
void	ptr_process(char c, int *n, va_list args);
void	str_process(char c, int *n, va_list args);
void	nb_process_u(char c, int *n, va_list args);
void	nb_process(char c, int *n, va_list args);
void	char_process(char c, int *n, va_list args);
void	char_process(char c, int *n, va_list args);
void	percent_process(char c, int *n);
#endif
