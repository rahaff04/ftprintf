#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
    int count;
    unsigned long addr;

    count = 0;
    addr = (unsigned long)ptr;
    if (addr == 0)
        return ft_putstr("(nil)");
    else
    {
        count += ft_putstr("0x");
        count += ft_puthexLower(addr);
    }
    return count;
}