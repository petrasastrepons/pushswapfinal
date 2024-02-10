/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:35:17 by psastre           #+#    #+#             */
/*   Updated: 2023/06/28 18:32:24 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	len;

	len = 0;
	if (!str)
		ft_putstr("(null)", count);
	else
	{
		while (str[len] && *count != -1)
		{
			ft_putchar(str[len], count);
			len++;
		}
	}
}
