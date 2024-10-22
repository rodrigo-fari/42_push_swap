/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:06:39 by rde-fari          #+#    #+#             */
/*   Updated: 2024/10/22 17:49:06 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_sorted(t_stack_node **st_a)
{
	int				verify;
	int				i;
	t_stack_node	*node;

	node = *st_a;
	verify = (*st_a)->nbr;
	i = 1;
	while (node->next && i <= (*st_a)->stack_size)
	{
		node = node->next;
		if (node->nbr < verify)
			return (1);
		verify = node->nbr;
		i++;
	}
	return (0);
}

