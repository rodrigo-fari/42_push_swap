/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:26:55 by rde-fari          #+#    #+#             */
/*   Updated: 2024/10/22 16:43:44 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_size(char **nbr)
{
	int	i;

	i = 1;
	while (nbr[i])
		i++;
	return (i);
}

t_stack_node	*lstnew(int nbr)
{
	t_stack_node	*nnode;

	nnode = ft_calloc(1, sizeof(t_stack_node));
	if (!nnode)
		return (NULL);
	nnode->nbr = nbr;
	nnode->next = NULL;
	return (nnode);
}

void	error(char *str, t_stack_node *st_a)
{
	ft_putendl_fd("\033[31mError.\033[0m", 2);
	ft_putendl_fd(str, 2);
	if (st_a)
		clear_all(st_a);
	exit (1);
}

char	*array_to_string(char **str)
{
	int		i;
	char	*new_str;

	new_str = ft_strdup("");
	i = 1;
	while (str[i])
	{
		new_str = ft_strjoin(new_str, (const char *)str[i]);
		new_str = ft_strjoin(new_str, " ");
		i++;
	}
	return (new_str);
}

void	clear_all(t_stack_node *st_a)
{
	t_stack_node	*temp;

	temp = st_a;
	while (temp)
	{
		temp = st_a->next;
		free (st_a);
		st_a = temp;
	}
}
