/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42poto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:34:15 by rde-fari          #+#    #+#             */
/*   Updated: 2024/10/15 18:15:44 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack_a(char **nbr, t_stack_node **st_a)
{
	int	i;
	int	stack_size;

	stack_size = ft_stack_size(nbr);
	i = 0;
	while (i != stack_size)
	{
		(*st_a) = lstnew(nbr[i]);
		(*st_a)->prev = (*st_a);
		(*st_a) = (*st_a)->next;
		i++;
	}
}
