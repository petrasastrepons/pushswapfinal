/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:19:34 by psastre           #+#    #+#             */
/*   Updated: 2023/05/27 16:20:59 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<strings.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//int	main(void)
//{
//	char str[] = "Hello world!";
//	ft_bzero(str, 6);
//	return (0);
//}
