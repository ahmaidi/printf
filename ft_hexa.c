/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:46:53 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/12/06 17:04:33 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hexa(unsigned int n, char base)
{
	if (n >= 16)
	{
		print_hexa(n / 16, base);
		print_hexa(n % 16, base);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + 48);
		else if (n >= 10 && base == 'x')
			ft_putchar(n + 87);
		else if (n >= 10 && base == 'X')
			ft_putchar(n + 55);
	}
}

int	ft_hexa(unsigned int n, char base)
{
	int	count;

	if (n == 0)
	{
		print_hexa(n, base);
		return (1);
	}
	count = 0;
	print_hexa(n, base);
	while (n)
	{
		count++;
		n /= 16;
	}
	return (count);
}
