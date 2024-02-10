/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:58:12 by psastre           #+#    #+#             */
/*   Updated: 2024/02/10 10:45:05 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap(t_stack *src, int stk)
{
	int	cont;
	int	index;

	if (!src || src->size <= 1)
		return (ERROR);
	cont = src->first->cont;
	index = src->first->index;
	src->first->cont = src->first->next->cont;
	src->first->index = src->first->next->index;
	src->first->next->cont = cont;
	src->first->next->index = index;
	if (stk == STKA)
		ft_printf("sa\n");
	else if (stk == STKB)
		ft_printf("sb\n");
	return (SUCCESS);
}

int	swap_swap(t_stack *stka, t_stack *stkb)
{
	if (!stka || !stkb || stka->size <= 1 || stkb->size <= 1)
		return (ERROR);
	swap(stka, 0);
	swap(stkb, 0);
	ft_printf("ss\n");
	return (SUCCESS);
}
