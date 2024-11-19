/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:13:56 by mkettab           #+#    #+#             */
/*   Updated: 2024/11/19 19:24:58 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_UTILS_H
# define PRINTF_UTILS_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int	ft_strlen(char *s);
int ft_intlen(int j);
int	ft_putchar(char c);
int	ft_inthexlen(int c);
int ft_putint(int d);
int	ft_putstr(char *str);
int	ft_intunslen(unsigned int c);
int ft_putunsint(unsigned int d);
int	ft_puthex(unsigned int c, int low);
int	ft_putptr(void *ptr);

#endif