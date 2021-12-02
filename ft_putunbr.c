/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putUnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:21:45 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/12/02 21:40:50 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static size_t	size_of_n(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = n * (-1);
	}
	while (n / 10)
	{
		n = n / 10;
		i *= 10;
	}
	return (i);
}

int	ft_putunbr(long i)
{
	unsigned int	num;
	int				len;
	int				count;

	count = 0;
	len = size_of_n(i);
	if (i < 0)
		num = i * (-1);
	else
		num = i;
	while (len != 0)
	{
		count += ft_putchar((num / len) + '0');
		num = num % len;
		len /= 10;
	}
	return (count);
}
