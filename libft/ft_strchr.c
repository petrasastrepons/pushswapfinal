/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:22:42 by psastre           #+#    #+#             */
/*   Updated: 2023/05/24 19:34:43 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s)
	{
		if (*s == a)
		{
			return ((char *) s);
		}
		s++;
	}
	if (a == '\0')
	{
		return ((char *) s);
	}
	return (0);
}

//int	main(void)
//{
//	const char *s = "treinta";
//	int c = 'i';

//	printf("%s", ft_strchr(s, c));
//	return (0);
//}
