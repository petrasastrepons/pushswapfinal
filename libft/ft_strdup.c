/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:41:13 by psastre           #+#    #+#             */
/*   Updated: 2023/05/24 19:40:24 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<string.h>
//#include<stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}

//int	main(void)
//{
//	const char s1[] = "hello";
//
//	printf("%s", ft_strdup(s1));
//	printf("%s", strdup(s1));
//	return (0);
//}
