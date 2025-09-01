#include "libftprintf.h"

int	ft_putptr(void *ptr)
{
    int count;
    unsigned long long addr;

    count = 0;
    addr = (unsigned long long)ptr;
    if (addr == 0)
        return ft_putstr("0x0");
    else
    {
        ft_putstr("0x");
        count += 2;
        count += ft_puthexLower(addr);
    }
    return count;
}