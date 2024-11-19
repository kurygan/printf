/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:35:21 by mkettab           #+#    #+#             */
/*   Updated: 2024/11/19 19:22:56 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

int ft_putint(int d)
{
	if(d == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (d < 0)
	{
		d = -d;
		ft_putchar('-');
	}
	if(d >= 10)
	{
		ft_putint(d / 10);
		ft_putint(d % 10);
	}
	if(d < 10)
		ft_putchar(d + '0');
	return (ft_intlen(d));
}

int ft_putunsint(unsigned int d)
{
	if (d >= 10)
	{
		ft_putunsint(d / 10);
		ft_putunsint(d % 10);
	}
	if (d < 10)
		ft_putchar(d + '0');
	return (ft_intunslen(d));
}

int	ft_puthex(unsigned int c, int low)
{
	char *base;
	if(low == 1)
		base = "0123456789abcdef";
	if(low == 0)
		base = "0123456789ABCDEF";
	if (c >= 16)
	{
		ft_puthex(c / 16, low);
		ft_puthex(c % 16, low);
	}
	if(c < 16)
		ft_putchar(base[c]);
	return (ft_inthexlen(c));
}
