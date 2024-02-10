/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:19:59 by psastre           #+#    #+#             */
/*   Updated: 2023/05/24 18:43:55 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<string.h>
//#include<stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	if (src == NULL && dst == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}

//int	main(void)
//{
//	char src[] = "hola";
//	char dst[12] = "jjjjjjjjj";
//
//	size_t n = 4;
//
//	printf(" og string dst :  %s\n", dst); 
//	printf(" -----> string: %s\n", (char *)ft_memcpy(dst, src, n));
//	printf("%s\n", (char *)memcpy(dst, src, n));
//	return (0);
//}
