/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:36:53 by psastre           #+#    #+#             */
/*   Updated: 2023/05/24 16:52:07 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
#include "libft.h"
//#include<stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
	}
	if (n < 0 && n > -2147483648)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n < 10 && n > -2147483648)
	{
		ft_putchar_fd(n + '0', fd);
	}
}

//int	main(void)
//{
//	FILE *file = fopen("test.txt", "w");
//	if (file == NULL)
//	{
//		printf("error \n");
//		return (1);
//	}
//	char n = '3';
//
//	ft_putnbr_fd(n, fileno(file));
//	fclose(file);
//	printf("resultado ok \n");
//	return (0);
//}
