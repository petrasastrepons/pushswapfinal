/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:20:45 by psastre           #+#    #+#             */
/*   Updated: 2023/05/20 15:52:45 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<string.h>

size_t	ft_strlcpy(char *d, const char *s, size_t dsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	if (dsize < 1)
		return (len);
	i = 0;
	while (s[i] != '\0' && i < (dsize - 1))
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (len);
}

//int	main(void)
//{
//	char s[] = "hola";
//	char d[] = "adeu";
//	size_t dsize = 3;
//	printf("%zu", ft_strlcpy(d, s, dsize));
//	return (0);
//}
