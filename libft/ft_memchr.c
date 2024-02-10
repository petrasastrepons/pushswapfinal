/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:25:42 by psastre           #+#    #+#             */
/*   Updated: 2023/05/24 18:57:24 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;

	i = 0;
	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == to_find)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	char	s[] = "Hello world";
//	int	c = 'w';
//	size_t	n = 10;
//
//	printf("%s\n", (char *)ft_memchr(s, c, n));
//	printf("%s\n", (char *)memchr(s, c, n));
//	return (0);
//}
