/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:23:42 by rde-fari          #+#    #+#             */
/*   Updated: 2024/11/28 12:47:40 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	find_highest_index(t_stack *stack)
{
	int		index;

	index = stack->index;
	while (stack)
	{
		if (stack->index > index)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}

void	small_sort(t_stack **stack)
{
	int		highest;

	if (is_sorted(*stack))
		return ;
	highest = find_highest_index(*stack);
	if ((*stack)->index == highest)
		do_ra(stack);
	else if ((*stack)->next->index == highest)
		do_rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		do_sa(stack);
}
