/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:28:12 by psastre           #+#    #+#             */
/*   Updated: 2024/02/03 10:19:09 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libf.h"
#include <string.h>
//#include<stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[h] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len
			&& haystack [h + n] != '\0')
		{
			if (haystack[h + n] == '\0' && needle[h] == '\0')
				return ((char *)haystack + h);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	if (haystack[h] == '\0')
		return (0);
	return (0);
}

//int	main(void)
//{
//	const char *haystack = "Hello, world";
//	const char *needle = "el";
//	char *result = strnstr(haystack, needle, 13);
//	if (result != NULL)
//	{
//		printf("%s", result);
//	}
//	else
//	{
//		printf("substring not found");
//	}
//	return (0);
//}
