/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:32:58 by psastre           #+#    #+#             */
/*   Updated: 2024/02/09 17:50:55 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c, int *count)
{
	int	i;

	i = 0;
	if (write (1, &c, 1) < 0)
		*count = -1;
	else
		*count = *count + 1;
}
