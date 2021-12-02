/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:34:35 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/12/02 20:39:52 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	size_of_n(int n)
{
	int		i;
	long	num;

	i = 1;
	num = n;
	if (n < 0)
	{
		num = n * (-1);
	}
	while (num / 10)
	{
		num = num / 10;
		i *= 10;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int				len;
	long			num;
	int				count;

	count = 0;
	len = (int)size_of_n(n);
	num = n;
	if (n < 0)
	{
		count += ft_putchar('-');
		num = num * (-1);
	}
	while (len != 0)
	{
		count += ft_putchar((num / len) + '0');
		num = num % len;
		len /= 10;
	}
	return (count);
}
