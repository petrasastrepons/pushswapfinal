/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:28:30 by psastre           #+#    #+#             */
/*   Updated: 2023/05/27 16:04:14 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while ((*str == 32) || ((*str >= 9) && (*str <= 13)))
	{
		str++;
	}
	if (*str == '-')
		sign *= -1;
	if ((*str == '-') || (*str == '+'))
		str++;
	while ((*str >= '0') && (*str <= '9'))
	{
		res = res * 10 + *str - 48;
		str++;
	}
	return (res * sign);
}

//int	main(void)
//{
//	const char *str = "1234";
//	printf("%d", ft_atoi(str));
//	return(0);
//}
