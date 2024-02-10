/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:59:03 by psastre           #+#    #+#             */
/*   Updated: 2023/06/28 18:37:54 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int num, int *count)
{
	if (num > 9)
	{
		if (*count != -1)
			ft_print_unsigned(num / 10, count);
		if (*count != -1)
			ft_print_unsigned(num % 10, count);
	}
	else
	{
		if (*count != -1)
			ft_putchar(num + '0', count);
	}
}
