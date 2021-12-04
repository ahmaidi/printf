/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:46:43 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/12/05 00:48:57 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	put_print(va_list args, char chr)
{
	int	length;

	length = 0;
	if (chr == '%')
	{
		write(1, &chr, 1);
		length++;
	}
	else if (chr == 'c')
		length += ft_putchar(va_arg(args, int ));
	else if (chr == 's')
		length += ft_putstr(va_arg(args, char *));
	else if (chr == 'd' || chr == 'i')
		length += ft_putnbr(va_arg(args, int ));
	else if (chr == 'u')
		length += ft_putunbr(va_arg(args, unsigned int));
	// else if (chr == 'x' || chr == 'X')
	// 	length += ft_hexa(va_arg(args, unsigned int), chr);
	return (length);
}

int	ft_printf(const char *format,	...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += put_print(args, format[i + 1]);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			len++;
		}
		i++;
	}
	return (len);
}

// int main()
// {
// 	int a;
// 	a = ft_printf("%u\n", -12364);
// 	ft_printf("%d\n",a);
// 	return (0);
// }