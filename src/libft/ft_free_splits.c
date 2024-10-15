/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_splits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42poto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:52:52 by rde-fari          #+#    #+#             */
/*   Updated: 2024/10/15 17:55:47 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_free_splits(char **line)
{
	int	i;

	i = 0;
	if (!line)
		return (0);
	while (line[i])
		free(line[i++]);
	free(line);
	return (0);
}
