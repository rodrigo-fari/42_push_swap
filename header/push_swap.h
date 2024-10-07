/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42poto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:41:10 by rde-fari          #+#    #+#             */
/*   Updated: 2024/10/07 19:57:23 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//╔════════════════════════════════════════════════╗
//║                                                ║
//║                push_swap header                ║
//║                                                ║
//╚════════════════════════════════════════════════╝

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//╔═════════════════════ Library ═══════════════════╗
# include "../src/libft/libft.h"
# include <stdbool.h>
# include <limits.h>
//╚═════════════════════════════════════════════════╝
//
//
//
//╔═════════════════════ Structs ═══════════════════╗
typedef struct s_stack_node
{
	int						nbr; 			//Numero atribuido 
	int						index;			//Index da posicao na lista
	int						push_cost;		//Custo da operacao
	struct	s_stack_node	*target_node;	//Target da "A" para a "B"
	struct	s_stack_node	*next;			//Proximo node da lista 
	struct	s_stack_node	*prev;			//Node anterior da lista
}	t_stack_node;
//╚═════════════════════════════════════════════════╝
//
//
//
//╔══════════════════ push_swap.c ══════════════════╗
void	init_stack_a(t_stack_node **stack_a, char **nbr, int stack_size);

//╚═════════════════════════════════════════════════╝
//
//
//
//╔═══════════════ push_swap_utils.c ═══════════════╗
t_stack_node	*lstnew(char *nbr);
int		ft_stack_size(char **nbr);

//╚═════════════════════════════════════════════════╝
//
//
//
//╔════════════════════ End if ═════════════════════╗
#endif
//╚═════════════════════════════════════════════════╝
