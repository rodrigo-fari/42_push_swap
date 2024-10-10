/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42poto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:31:10 by rde-fari          #+#    #+#             */
/*   Updated: 2024/10/10 13:33:59 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main (int argc, char **argv)
{
	char			**nbr;
	t_stack_node	*stack_a;

	nbr = NULL;
	stack_a = NULL;
	if (argc == 1 || !argv[1][0])
		error("Invalid arguments!");
	nbr = ft_split(argv[1], ' ');
	ensure_unique(nbr);
	if (argc == 2)
		init_stack_a(nbr, &stack_a);
	return (0);
}
