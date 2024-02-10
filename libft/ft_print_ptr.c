/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:27:29 by psastre           #+#    #+#             */
/*   Updated: 2023/06/28 18:41:55 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_ptr(unsigned long long ptr, int *count)
{
	char	*base16;

	base16 = "0123456789abcdef";
	if (ptr >= 16)
	{
		if (*count != -1)
			ft_put_ptr(ptr / 16, count);
		if (*count != -1)
			ft_put_ptr(ptr % 16, count);
	}
	else
	{
		if (*count != -1)
			ft_putchar(base16[ptr], count);
	}
}

void	ft_print_ptr(unsigned long long ptr, int *count)
{
	if (*count != -1)
		ft_putstr("0x", count);
	if (*count != -1)
		ft_put_ptr(ptr, count);
}
