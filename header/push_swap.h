/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42poto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:41:10 by rde-fari          #+#    #+#             */
/*   Updated: 2024/10/15 18:10:02 by rde-fari         ###   ########.fr       */
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
//╔═════════════════════ Colors ═══════════════════╗
#define RED "\033[31m"
#define GREEN "\033[32m"
#define ORANGE "\033[38;5;208m"
#define PURPLE "\e[35m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
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
void	init_stack_a(char **nbr, t_stack_node **stack_a);
void	init_stack_b(t_stack_node **stack_b);

//╚═════════════════════════════════════════════════╝
//
//
//
//╔═══════════════ push_swap_utils.c ═══════════════╗
int				ft_stack_size(char **nbr);
char	*array_to_string(char **str);
t_stack_node	*lstnew(char *nbr);
void	error(char *str, t_stack_node *st_a);
void	clear_all(t_stack_node *st_a);


//╚═════════════════════════════════════════════════╝
//
//
//
//╔═════════════ push_swap_parsing.c ═══════════════╗
void	parse_data(char *str, t_stack_node *st_a);
void	ensure_unique(char **nbr);
void	check_alpha(char *str);

//╚═════════════════════════════════════════════════╝
//╔════════════════════ End if ═════════════════════╗
#endif
//╚═════════════════════════════════════════════════╝
