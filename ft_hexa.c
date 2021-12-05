/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:46:53 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/12/06 00:40:49 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned int n, char base)
{
	if (n >= 16)
	{
		ft_hexa(n / 16, base);
		ft_hexa(n % 16, base);
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
	return (0);
}
