/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:13:56 by mkettab           #+#    #+#             */
/*   Updated: 2024/12/05 18:27:08 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>

int	ft_strlen(char *s);
int ft_intlen(long j);
int	ft_putchar(char c);
int	ft_inthexlen(unsigned long c);
int ft_putint(long d);
int	ft_putstr(char *str);
int	ft_intunslen(long c);
int ft_putunsint(long d);
int	ft_puthex(unsigned long c, int low);
int	ft_putptr(void *ptr);
int	ft_printf(const char *s, ...);

#endif
