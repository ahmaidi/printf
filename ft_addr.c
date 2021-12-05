/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:21:21 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/12/05 22:03:44 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa_p(unsigned long n)
{
	static int	count;

	if (n >= 16)
	{
		ft_hexa_p(n / 16);
		ft_hexa_p(n % 16);
	}
	else
	{
		if (n < 10)
		count += ft_putchar(n + 48);
		else
		count += ft_putchar(n + 87);
	}
	return (count);
}

int	ft_addr(unsigned long n)
{
	int	count;

	count = 0;
	count += ft_putchar('0');
	count += ft_putchar('x');
	count += ft_hexa_p(n);
	return (count);
}
