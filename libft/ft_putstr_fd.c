/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:38:23 by psastre           #+#    #+#             */
/*   Updated: 2023/05/24 16:37:18 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<unistd.h>
//#include<stdio.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
	{
		return ;
	}
	while (s[i] && fd >= 0)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

//int	main(void)
//{
//	FILE *file = fopen("test.txt", "w");
//	if (file == NULL)
//	{
//		printf("error \n");
//	}
//	char s[] = "Hola";
//	ft_putstr_fd(s, fileno(file));
//	fclose(file);
//	printf("resultado ok \n");
//	return (0);
//}	
