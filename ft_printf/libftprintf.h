#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct s_flags {
    
    int flag_minus;
    int flag_zero;
    int flag_hash;
    int flag_space;
    int flag_plus;
    int point;
    int width;
    int index;
    int state;
    int precision;

} t_flags;

typedef struct state {

    int c;
    int d;
    int p;
    
}   state;


void    print_address_hex(void *p0, t_flags flags);
int     hex_null(void *p0, t_flags flags);
void	ft_putchar_n(char c, int *fd);
void	ft_putnbr_n(int nb, int *fd);
