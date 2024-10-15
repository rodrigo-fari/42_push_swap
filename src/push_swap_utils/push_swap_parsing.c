/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_parsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42poto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:19:28 by rde-fari          #+#    #+#             */
/*   Updated: 2024/10/15 17:56:21 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_data(char *str, t_stack_node *st_a)
{
	char	**nbr;

	check_alpha(str);
	nbr = ft_split(str, ' ');
	ensure_unique(nbr);
	init_stack_a(nbr, &st_a);
	ft_free_splits(nbr);
}

void	ensure_unique(char **nbr)
{
	int		i;
	int		j;

	i = 0;
	while (nbr[i])
	{
		if (ft_atol(nbr[i]) != ft_atoi(nbr[i]))
			error("Input number above max int!", NULL);
		j = i + 1;
		while (nbr[j])
		{
			if (ft_atoi(nbr[i]) == ft_atoi(nbr[j]))
				error("Duplicated number found!", NULL);
			j++;
		}
		i++;
	}
}
void	check_alpha(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (!str[i])
		error("Empty argument!", NULL);
	while (str[i])
	{
		if (str[i] != ' ')
			flag = 1;
		i++;
	}
	if (flag == 0)
		error("Invalid argument!", NULL);
	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0 && str[i] != ' ')
			error("Alphanumerical character found!", NULL);
		i++;
	}
}
