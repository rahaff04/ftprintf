/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <ralamair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:45:36 by ralamair          #+#    #+#             */
/*   Updated: 2025/09/21 08:57:41 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

static int	whatprint(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putunsignednbr(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex_lower(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_puthex_upper(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
	{
		ft_putchar('%');
		return (ft_putchar(c) + 1);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	if (!format)
		return (-1);
	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += whatprint(format[i], args);
			if (format[i + 1] == '%' && format[i + 2] == '\0')
				return (-1);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/*#include <stdio.h>
#include <limits.h>
int	main(void)
{
	//char str[] = "";
 	int x = printf("%%%%%%%\n");
	printf("%d\n", x);
	int y = ft_printf("%%%%%%%\n");
	printf("%d",y);
	return (0);
}*/
