CC = gcc
CFLAGS = -Wall -Wextra -Werror
INC = -I.
AR = ar
ARF = -rcs
NAME = libftprintf.a

MAN = 	ft_printf/ft_printf	libft/ft_strrchr	libft/ft_atoi	libft/ft_strlen \
		ft_printf/hex_helper	libft/ft_itoa
MANFC = $(addsuffix .c, $(MAN))
MANO = $(MANFC:.c=.o)

all: $(NAME)

$(NAME): $(MANO)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(AR) $(ARF) $@ $^

%.o: %.c
	@$(CC) -c $(CFLAGS) $(INC) $< -o $@

clean:
	$(MAKE) clean -C ./libft
	@rm -f $(MANO)

fclean: clean
	$(MAKE) fclean -C ./libft
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re