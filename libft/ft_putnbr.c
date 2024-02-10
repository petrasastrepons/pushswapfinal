/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:33:27 by psastre           #+#    #+#             */
/*   Updated: 2023/06/28 18:41:44 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		if (*count != -1)
			ft_putstr("-2147483648", count);
	}
	else
	{
		if (n < 0 && *count != -1)
		{
			ft_putchar('-', count);
			n = -n;
		}
		if (n >= 10)
		{
			if (*count != -1)
				ft_putnbr(n / 10, count);
			if (*count != -1)
				ft_putnbr(n % 10, count);
		}
		else
		{
			if (*count != -1)
				ft_putchar(n + '0', count);
		}
	}
}
