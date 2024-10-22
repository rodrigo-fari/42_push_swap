/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:31:10 by rde-fari          #+#    #+#             */
/*   Updated: 2024/10/22 16:44:58 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*st_a;

	st_a = NULL;
	if (argc == 1)
		return (0);
	if (argc != 2)
		parse_data(array_to_string(argv), &st_a);
	if (argc == 2)
		parse_data(argv[1], &st_a);
	stack_sorted(&st_a);
	clear_all(st_a);
	return (0);
}
