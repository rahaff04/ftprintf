#include "ft_printf.h"

int    ft_putstr(char *str)
{
    int i;
    int count;

    if (!str)
        return ft_putstr("(null)");
    count = 0;
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        count++;
        i++;
    }
    return (count);
}