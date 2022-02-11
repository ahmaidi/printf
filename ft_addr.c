/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:21:21 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/12/06 17:22:09 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_addr(unsigned long n)
{
	if (n >= 16)
	{
		print_addr(n / 16);
		print_addr(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + 48);
		else
			ft_putchar(n + 87);
	}
}

int	ft_addr(unsigned long n)
{
	int	count;

	count = 0;
	count += ft_putchar('0');
	count += ft_putchar('x');
	if (n == 0)
	{
		print_addr(n);
		return (3);
	}
	print_addr(n);
	while (n)
	{
		count++;
		n /= 16;
	}
	return (count);
}
