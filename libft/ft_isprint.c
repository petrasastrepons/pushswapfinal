/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:55:50 by psastre           #+#    #+#             */
/*   Updated: 2023/05/27 13:20:52 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_isprint(int c)
{
	if ((c >= 32) && (c < 127))
	{
		return (1);
	}
	return (0);
}

//int	main(void)
//{
//	char c = ' ';
//
//	ft_isprint(c);
//	printf("%d", ft_isprint(c));
//	return(0); 
//}
