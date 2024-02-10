/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:25:21 by psastre           #+#    #+#             */
/*   Updated: 2024/02/03 10:37:51 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(s);
	if (a == 0)
	{
		return ((char *) &s[i]);
	}
	while (i >= 0)
	{
		if (s[i] == a)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (0);
}
//int	main(void)
//{
//	const char *s = "treintaiaia";
//	int c = 'i';
//	printf("%s", ft_strrchr(s, c));
//	return (0);
//} 
