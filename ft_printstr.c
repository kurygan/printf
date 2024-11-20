/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:56:30 by mkettab           #+#    #+#             */
/*   Updated: 2024/11/20 20:04:35 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = ft_strlen(str);
	while(*str)
		write(1, str++, 1);
	return (count);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putptr(void *ptr)
{
	long converted; 
	
	converted = (long) ptr;
	if(!ptr)
	{
		ft_putstr("(nil)");
		return (-1);
	}
	write(1, "0x", 2);
	return (ft_puthex(converted, 1) + 2);
}