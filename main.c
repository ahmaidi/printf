/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:42:17 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/12/06 00:29:04 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include<stdio.h>
#include<limits.h>

int main()
{
	int a;
	int b;
	a = ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LONG_MAX, 0, -42);
	b = printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LONG_MAX, 0, -42);
	printf("dyalhom --> %d\n",b);
	printf("dyalna --> %d",a);
	return (0);
}