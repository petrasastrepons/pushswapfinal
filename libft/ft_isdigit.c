/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:48:56 by psastre           #+#    #+#             */
/*   Updated: 2023/05/27 13:18:37 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h> 

int	ft_isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}

//int	main(void)
//{
//	char	c = 'a'; 
//
//	ft_isdigit(c);
//	printf("%d", ft_isdigit(c));
//	return (0); 
//} 
