CC = gcc
CFLAGS = -Wall -Wextra -Werror
INC = -I.
AR = ar
ARF = -rcs
NAME = libftprintf.a

MAN = 	ft_printf/ft_printf	libft/ft_strlen	ft_printf/hex_helper \
	ft_printf/nbr_helper	ft_printf/char_process	ft_printf/hex_process	ft_printf/nb_process	\
	ft_printf/nb_process_u	ft_printf/percent_process	ft_printf/percent_process	\
	ft_printf/ptr_process	ft_printf/str_process	ft_printf/counters

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
bonus : $(NAME)

re: fclean all

.PHONY: all clean fclean re