/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:30:28 by psastre           #+#    #+#             */
/*   Updated: 2024/02/09 20:07:09 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_set(int ac, char **av, t_stack *stk)
{
	int	i;

	i = ac -1;
	while (i)
		push_stack(&stk, ft_atoi(av[i--]), 0);
	return (SUCCESS);
}

void	indexer(t_stack *stk)
{
	t_node	*tmp;
	t_node	*crnt;
	int		idx1;
	int		idx2;

	crnt = stk->first;
	idx2 = -1;
	while (++idx2 < stk->size)
	{
		idx1 = 0;
		tmp = stk->first;
		while (tmp)
		{
			if (tmp->cont < crnt->cont)
				idx1++;
			tmp = tmp->next;
		}
		crnt->index = idx1;
		crnt = crnt->next;
	}
}

int	find_pos(t_stack *src, int trgt)
{
	t_node	*aux;
	int		pos;

	pos = 0;
	aux = src->first;
	while (aux && aux->index != trgt)
	{
		aux = aux->next;
		pos++;
	}
	return (pos);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	parse(ac, av);
	double_init(&a, &b);
	stack_set(ac, av, a);
	indexer(a);
	if (is_sorted(a))
	{
		change(a, b);
		return (SUCCESS);
	}
	else
	{
		if (a->size < 6)
			s_sort(a, b);
		else
			sort_big(a, b);
	}
	change(a, b);
	return (SUCCESS);
}
