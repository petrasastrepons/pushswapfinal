/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:33:33 by psastre           #+#    #+#             */
/*   Updated: 2023/05/27 13:35:38 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	a;

	if (!s)
		return (NULL);
	ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len == ft_strlen(s) + 1 || len > ft_strlen(s))
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	a = 0;
	while (a++ < start)
	{
		s++;
	}
	ft_strlcpy(str, s, len + 1);
	return (str);
}

//int	main(void)
//{
//	char const *s = "hello, world";
//	unsigned int i = 2;
//	size_t len = 7;
//
//	printf("%s",ft_substr(s, i, len));
//	return (0);
//}
