/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putUnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:21:45 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/12/04 18:44:30 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static size_t	size_of_n(long n)
{
	unsigned int	i;

	i = 1;
	while (n / 10)
	{
		n = n / 10;
		i *= 10;
	}
	return (i);
}

int	ft_putunbr(unsigned int i)
{
	unsigned int	len;
	int				count;

	count = 0;
	len = size_of_n(i);
	
	while (len != 0)
	{
		count += ft_putchar((i/ len) + '0');
		i = i % len;
		len /= 10;
	}
	return (count);
}
