#!/bin/bash

gcc ft_printf.c libft/ft_putchar_fd.c libft/ft_strrchr.c libft/ft_atoi.c libft/ft_strlen.c \
		libft/ft_putnbr_fd.c libft/ft_putstr_fd.c hex_helper.c libft/ft_itoa.c
./a.out > ft_printf.txt

gcc Test_printf_int.c

./a.out > test_int.txt

diff ft_printf.txt test_int.txt > diff.txt

[ -s diff.txt ] && echo "Error" || echo "DAJE DIO CANE!!"