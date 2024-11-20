/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:58:53 by mkettab           #+#    #+#             */
/*   Updated: 2024/11/20 20:40:39 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_args(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return(ft_putint(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'c')
		return(ft_putchar(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putunsint(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, long), 1));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, long), 0));
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

int main(){
	ft_printf("ft_printf: ");
	int printf42 = ft_printf(" %c %c %c ", '0', 0, '1');
	printf("\nprintf: ");
	int printfoff = printf(" %c %c %c ", '0', 0 ,'1');
	printf("\n");
	
	printf("ft_printf: %d\t", printf42);
	printf("printf: %d\n", printfoff);	
}