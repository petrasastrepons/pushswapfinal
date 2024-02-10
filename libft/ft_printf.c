/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:24:58 by psastre           #+#    #+#             */
/*   Updated: 2023/06/28 18:40:05 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check(char src, va_list args, int *count)
{
	if ((src == 'c') && (*count >= 0))
		ft_putchar(va_arg(args, int), count);
	else if ((src == 's') && (*count >= 0))
		ft_putstr(va_arg(args, char *), count);
	else if ((src == 'p') && (count >= 0))
		ft_print_ptr(va_arg(args, unsigned long long), count);
	else if ((src == 'd' || src == 'i') && (count >= 0))
		ft_putnbr(va_arg(args, int), count);
	else if ((src == 'u') && (count >= 0))
		ft_print_unsigned(va_arg(args, unsigned int), count);
	else if ((src == 'x') && (count >= 0))
		ft_print_hex(va_arg(args, unsigned int), count, 'x');
	else if ((src == 'X') && (count >= 0))
		ft_print_hex(va_arg(args, unsigned int), count, 'X');
	else if ((src == '%') && (count >= 0))
		ft_putchar('%', count);
}

int	ft_printf(char const *src, ...)
{
	va_list	args;
	int		prnt;
	int		count;

	prnt = 0;
	count = 0;
	va_start(args, src);
	while (src[prnt] != '\0' && count != -1)
	{
		if (src[prnt] == '%')
			ft_check(src[++prnt], args, &count);
		else if (count >= 0)
			ft_putchar(src[prnt], &count);
		prnt++;
	}
	va_end(args);
	return (count);
}
