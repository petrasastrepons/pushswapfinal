/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:20:20 by psastre           #+#    #+#             */
/*   Updated: 2024/02/03 10:17:42 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<string.h>
//#include<stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dst == NULL)
	{
		return (NULL);
	}
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d >= s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}

//int	main(void)
//{
//	char	src[] = "hola";
//	char	dst[] = "adios";
//	size_t	len = 3;
//
//	printf("%s\n", (char *)ft_memmove(dst, src, len));
//	printf("%s\n", (char *)memmove(dst, src, len));
//	return(0);
//}
