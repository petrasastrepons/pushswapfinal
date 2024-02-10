/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:29:32 by psastre           #+#    #+#             */
/*   Updated: 2024/02/09 20:02:46 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push_stack(t_stack **stk, int cont, int index)
{
	t_node	*new;

	new = ft_calloc(sizeof(t_node), 1);
	if (!new)
		return (ERROR);
	new->cont = cont;
	new->index = index;
	new->next = (*stk)->first;
	(*stk)->first = new;
	(*stk)->size++;
	return (TRUE);
}

int	pop_stack(t_stack **stk)
{
	t_node	*rm;
	t_node	*next;

	if (!*stk || (*stk)->size == 0)
		return (ERROR);
	rm = (*stk)->first;
	next = (*stk)->first->next;
	free(rm);
	(*stk)->first = next;
	(*stk)->size--;
	return (SUCCESS);
}

int	push(t_stack **src, t_stack **dst, int stk)
{
	if (!src || (*src)->size == 0)
		return (ERROR);
	push_stack(dst, (*src)->first->cont, (*src)->first->index);
	pop_stack(src);
	if (stk == 1)
		ft_printf("pa\n");
	else if (stk == 2)
		ft_printf("pb\n");
	return (SUCCESS);
}
