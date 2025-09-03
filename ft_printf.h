#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int n);
int ft_putunsignednbr(unsigned int n);
int ft_puthex_lower(unsigned int n);
int ft_puthex_upper(unsigned int n);
int ft_putptr(void *ptr);

#endif
