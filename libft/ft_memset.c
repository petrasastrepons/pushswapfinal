/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:30:36 by psastre           #+#    #+#             */
/*   Updated: 2024/02/03 10:18:05 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include<string.h>
//#include<stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*s;
	size_t				i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

//int	main(void)
//{
//	char b[] = "hello, world!";
//	int	c = 5;
//	size_t	len = 10;
//
//	printf("%s\n", (char *)ft_memset(b, c, len));
//	printf("%s", (char *)memset(b, c, len));
//
//	return(0);
//}
