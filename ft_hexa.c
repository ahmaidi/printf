/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otman <otman@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:46:53 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/12/05 19:12:09 by otman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_hexa(unsigned int n, char base)
{
	int A[20];

	while(n >= 16)
	{
		
	}else 
	{
		if(n < 10)
			count += ft_putchar(n + 48);
		else 
		{
			if(base == 'X')
				count += ft_putchar(n + 55);
			else
				count += ft_putchar(n + 87);
		}
	}
	return (count);
}
