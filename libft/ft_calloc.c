/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:06:49 by psastre           #+#    #+#             */
/*   Updated: 2023/05/24 18:11:19 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdlib.h>
//#include<stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
	{
		return (ptr);
	}
	ft_bzero(ptr, size * count);
	return (ptr);
}

//int	main(void)
//{
//	char	*str;
//
//	write(1, str, 5);
//	str = ft_calloc(5, sizeof(char));
//	str[0] = 'c';
//	write(1, str, 5);
//	str = ft_calloc(5, sizeof(char));
//	write(1, str, 5);
//
//	return (0);
//}
