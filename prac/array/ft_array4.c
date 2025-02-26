/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshao-ju <@42-bkk.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 06:46:56 by sshao-ju          #+#    #+#             */
/*   Updated: 2025/02/24 06:46:58 by sshao-ju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

int	ft_find(t_ftArray *arr, int item)
{
	int	idx;

	idx = 0;
	while (idx < arr->size)
	{
		if (*(arr->data + idx) == item)
			return (idx);
		idx++;
	}
	return (-1);
}
