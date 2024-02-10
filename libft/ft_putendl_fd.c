/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:36:35 by psastre           #+#    #+#             */
/*   Updated: 2023/05/24 16:20:03 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

//int	main(void)
//{
//	FILE *file = fopen("test.txt", "w");
//	if (file ==  NULL)
//	{
//		printf("error \n");
//		return (1);
//	}
//
//	char s[] = "Hola";
//		
//	ft_putendl_fd(s, fileno(file));
//	fclose(file);
//	printf("resultado ok \n");
//	return (0);
//}
