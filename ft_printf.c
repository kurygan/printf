/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:58:53 by mkettab           #+#    #+#             */
/*   Updated: 2024/11/06 22:00:22 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printf(const char *s)
{
	while(*s)
		write(1, s++, 1);
}

int main(void)
{
	ft_printf("gros caca %d moi");
}