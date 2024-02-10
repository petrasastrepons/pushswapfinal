/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:34:41 by psastre           #+#    #+#             */
/*   Updated: 2023/05/27 16:00:51 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<string.h>
//#include<stdio.h>

static int	ft_cwords(const char *str, char c)
{
	int	sum;
	int	p;

	sum = 0;
	p = 0;
	while (*str != '\0')
	{
		if (*str != c && p == 0)
		{
			sum++;
			p = 1;
		}
		else if (*str == c)
			p = 0;
		str++;
	}
	return (sum);
}

static int	ft_len(const char *str, int i, char c)
{
	int	len;

	len = 0;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char	**ft_error(char **new, int j)
{
	while (j >= 0)
	{
		free(new[j]);
		j--;
	}
	free(new);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**new;

	i = 0;
	j = 0;
	new = malloc((ft_cwords(s, c) + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	while (j < ft_cwords(s, c))
	{
		while (s[i] == c)
			i++;
		new[j] = ft_substr(s, i, ft_len (s, i, c));
		if (!new[j])
			return (ft_error(new, j));
		i += ft_len(s, i, c);
		j++;
	}
	new[j] = 0;
	return (new);
}

//int	main(void)
//{
//	char s[] = "hello_world_mum";
//	char c = '_';
//	int  n = ft_cwords(s, c);
//	int i;
//	char **str = ft_split(s, c);
//	i = 0;	
//	while (i < n)
//	{
//		printf("%s \n", str[i]);
//		i++;
//	}
//	return (0);
//}
