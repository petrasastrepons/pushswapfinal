/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:24:31 by psastre           #+#    #+#             */
/*   Updated: 2024/02/03 10:20:20 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s2[i] != '\0' || s1[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		else if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	return (0);
}

//int	main(void)
//{
//	const char s1[] = "Hola";
//	const char s2[] = "Hola";
//	size_t n = 1;
//	printf ("%d", ft_strncmp(s1, s2, n));
//	return (0);
//}
