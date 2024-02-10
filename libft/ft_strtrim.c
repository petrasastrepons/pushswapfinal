/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:34:16 by psastre           #+#    #+#             */
/*   Updated: 2023/05/27 13:11:21 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end]) && end > 0)
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}

//int	main(void)
//{
//	char s1[] = "hello";
//	char set[] = "hl";
//
//	printf("%s", ft_strtrim(s1, set));
//	return (0);
//}
