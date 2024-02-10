/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:35:46 by psastre           #+#    #+#             */
/*   Updated: 2023/05/27 13:06:48 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<unistd.h>
//#include<stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

//void	ft_convert(unsigned int n, char *a)
//{
//	printf("%c \n", *a);
//	if (n % 2 == 0)
//		*a = ft_toupper(*a);
//}

//int	main(void)
//{
//	char	*s;
//
//	s = ft_strdup("mamapapa");
//
//	ft_striteri(s, &ft_convert);
//	printf("%s \n", s);
//	return (0);
//}
