/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42poto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:26:55 by rde-fari          #+#    #+#             */
/*   Updated: 2024/10/07 19:07:18 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_size(char **nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
		i++;
	return (i);
}

t_stack_node	*lstnew(char *nbr)
{
	t_stack_node	*nnode;

	nnode = malloc(sizeof(t_stack_node));
	if (!nnode)
		return (NULL);
	nnode->nbr = ft_atoi(nbr);
	nnode->next = NULL;
	return (nnode);
}
