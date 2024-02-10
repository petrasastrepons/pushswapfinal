/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:19:38 by psastre           #+#    #+#             */
/*   Updated: 2023/06/28 18:34:50 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(char const *format, ...);
void	ft_putchar(int c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_print_ptr(unsigned long long ptr, int *count);
void	ft_putnbr(int n, int *count);
void	ft_print_unsigned(unsigned int num, int *count);
void	ft_print_hex(unsigned int nr, int *count, char c);
#endif
