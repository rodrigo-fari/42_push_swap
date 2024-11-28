/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:06:38 by rde-fari          #+#    #+#             */
/*   Updated: 2024/11/28 12:41:18 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

t_stack		*stack_new(int value);
t_stack		*get_stack_bottom(t_stack *stack);
t_stack		*fill_stack_values(int ac, char **av);
t_stack		*get_stack_before_bottom(t_stack *stack);

int			nb_abs(int nb);
int			is_sign(char c);
int			is_digit(char c);
int			is_sorted(t_stack *stack);
int			is_correct_input(char **av);
int			get_stack_size(t_stack	*stack);
int			nbstr_cmp(const char *s1, const char *s2);
int			get_lowest_index_position(t_stack **stack);

long int	ft_atoi(const char *str);

void		ft_putstr(char *str);
void		do_sa(t_stack **stack_a);
void		do_sb(t_stack **stack_b);
void		do_ra(t_stack **stack_a);
void		do_rb(t_stack **stack_b);
void		do_rra(t_stack **stack_a);
void		do_rrb(t_stack **stack_b);
void		small_sort(t_stack **stack);
void		free_stack(t_stack **stack);
void		assign_index(t_stack *stack_a, int ac);
void		do_pa(t_stack **stack_a, t_stack **stack_b);
void		do_pb(t_stack **stack_a, t_stack **stack_b);
void		do_ss(t_stack **stack_a, t_stack **stack_b);
void		do_rr(t_stack **stack_a, t_stack **stack_b);
void		do_rrr(t_stack **stack_a, t_stack **stack_b);
void		big_sort(t_stack **stack_a, t_stack **stack_b);
void		get_cost(t_stack **stack_a, t_stack **stack_b);
void		stack_add_bottom(t_stack **stack, t_stack *new);
void		exit_error(t_stack **stack_a, t_stack **stack_b);
void		do_cheapest_move(t_stack **stack_a, t_stack **stack_b);
void		get_target_position(t_stack **stack_a, t_stack **stack_b);
void		do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);

#endif