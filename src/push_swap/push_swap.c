/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42poto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:34:15 by rde-fari          #+#    #+#             */
/*   Updated: 2024/10/07 19:31:24 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack_a(t_stack_node **stack_a, char **nbr, int stack_size)
{
	int	i;

	i = 0;
	while (i != stack_size)
	{
		(*stack_a) = lstnew(nbr[i]);
		ft_printf("%d\n", (*stack_a)->nbr);
		(*stack_a) = (*stack_a)->next;
		i++;
	}
}

int main (int argc, char **argv)
{
	char			**nbr;
	int				stack_size;
	t_stack_node	*stack_a;
	t_stack_node	*stack_b;

	nbr = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || !argv[1][0])
	{
		ft_printf("Invalid arguments.\n");
		exit (1);
	}
	stack_size = 0;
	if (argc == 2)
	{
		nbr = ft_split(argv[1], ' ');
		stack_size = ft_stack_size(nbr);
	}
	init_stack_a(&stack_a, nbr, stack_size);
	return (0);
}

//criar uma funcao que descobre o numero de nodes
//alocar memoria suficiente na stack para os nodes
//inserir node a node dentro da stack malocados
//testa colocar numeros dentro da stack