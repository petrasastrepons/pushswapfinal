/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:34:20 by psastre           #+#    #+#             */
/*   Updated: 2023/07/22 11:09:40 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int nr, int *count, char c)
{
	char	*base16;
	char	*base16_lw;

	base16 = "0123456789ABCDEF";
	base16_lw = "0123456789abcdef";
	if (nr >= 16)
	{
		if (*count != -1)
			ft_print_hex(nr / 16, count, c);
		if (*count != -1)
			ft_print_hex(nr % 16, count, c);
	}
	else
	{
		if (c == 'X')
		{
			if (*count != -1)
				ft_putchar(base16[nr], count);
		}
		else
		{
			if (*count != -1)
				ft_putchar(base16_lw[nr], count);
		}
	}
}
