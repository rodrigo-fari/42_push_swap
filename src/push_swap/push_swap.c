/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42poto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:34:15 by rde-fari          #+#    #+#             */
/*   Updated: 2024/10/17 14:35:09 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack_a(char *nbr, t_stack_node **st_a)
{
	t_stack_node	*node;
	t_stack_node	*last_node;
	int				number;
	
	number = ft_atoi(nbr);
	node = lstnew(number);
	if (!(*st_a))
	{
		(*st_a) = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last_node((*st_a));
		last_node->next = node;
		node->prev = last_node;
	}
}

t_stack_node *find_last_node(t_stack_node *st_a)
{
	t_stack_node	*last_node;

	while(st_a->next)
		st_a = st_a->next;
	last_node = st_a;
	return (last_node);
}

void stack_fill(t_stack_node **st_a, char **nbr)
{
	int	i;
	int size;

	size = ft_stack_size(nbr);
	i = 0;
	while (i < size)
	{
		init_stack_a(nbr[i], st_a);
		i++;
	}
}
