/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:58:53 by mkettab           #+#    #+#             */
/*   Updated: 2024/11/19 19:26:36 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

int ft_args(char c, va_list args)
{
	if (c == 'd')
		return (ft_putint(va_arg(args, int)));
	else if (c == 'i')
		return (ft_putint(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putunsint(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, int), 1));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, int), 0));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, void *)));
	return (-1);
}

int	ft_printf(const char *s, ...)
{
	int final_len;
	int arg_len;
	va_list args;
	
	(void)0, final_len = 0, arg_len = 0;
	va_start(args, s);
	while(*s)
	{
		if(*s == '%')
		{
			arg_len = ft_args(*(s + 1), args);
			final_len += arg_len;
			s++;
		}
		else
		{
			write(1, s, 1);
			final_len++;
		}
		if (*s)
			s++;
	}
	return (final_len);
}

int main(void)
{
	int f = ft_printf("%p", NULL);
	ft_printf("\n");
	ft_printf("%d", f);

	return 0;
}