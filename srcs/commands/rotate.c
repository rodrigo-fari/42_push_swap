/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:35:21 by rde-fari          #+#    #+#             */
/*   Updated: 2024/11/28 12:48:35 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tail;

	tmp = *stack;
	*stack = (*stack)->next;
	tail = get_stack_bottom(*stack);
	tmp->next = NULL;
	tail->next = tmp;
}

void	do_ra(t_stack **stack_a)
{
	rotate(stack_a);
	ft_putstr("ra\n");
}

void	do_rb(t_stack **stack_b)
{
	rotate(stack_b);
	ft_putstr("rb\n");
}

void	do_rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr("rr\n");
}
