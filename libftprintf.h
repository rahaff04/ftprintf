#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int n);
int ft_putunsignednbr(unsigned int n);
int ft_puthexLower(unsigned int n);
int ft_puthexUpper(unsigned int n);
int ft_putptr(void *ptr);

#endif
