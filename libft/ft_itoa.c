/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:35:04 by psastre           #+#    #+#             */
/*   Updated: 2023/05/27 13:27:38 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>

static int	count_char(int num)
{
	int	c;

	c = 0;
	if (num != 0)
	{
		if (num < 0)
		{
			num = num * (-1);
			c++;
		}
		while (num != 0)
		{
			num = num / 10;
			c++;
		}
	}
	else
		c = 1;
	return (c);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	nbr;

	len = count_char(n);
	nbr = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nbr)
	{
		str[len] = ((nbr % 10) + '0');
		nbr /= 10;
		len--;
	}
	return (str);
}

//int	main(void)
//{
//	int	n = -432567;
//
//	printf("%s", ft_itoa(n));
//	return (0);
//}
