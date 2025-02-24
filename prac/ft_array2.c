/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshao-ju <@42-bkk.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 08:34:47 by sshao-ju          #+#    #+#             */
/*   Updated: 2025/02/23 08:35:07 by sshao-ju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

int	ft_capacity(t_ftArray *arr)
{
	return (arr->capacity);
}

bool	ft_arr_is_empty(t_ftArray *arr)
{
	if (arr->size == 0)
		return (true);
	return (false);
}

int	ft_at(t_ftArray *arr, int index)
{
	if (index < 0 || index > arr->size - 1)
		exit(EXIT_FAILURE);
	return (*(arr->data + index));
}

void	ft_resize(t_ftArray *arr)
{
	int	*new_arr;
	int	idx;

	if (arr->size + 1 == arr->capacity)
		arr->capacity *= 2;
	else if (arr->size == arr->capacity / 2)
		arr->capacity /= 2;
	if (arr->capacity < g_min_capacity)
		arr->capacity = g_min_capacity;
	new_arr = malloc(sizeof(int) * arr->capacity);
	ft_check_addr(new_arr);
	idx = 0;
	while (idx < arr->size)
	{
		*(new_arr + idx) = *(arr->data + idx);
		idx++;
	}
	free(arr->data);
	arr->data = new_arr;
}

void	ft_push(t_ftArray *arr, int item)
{
	if (arr->size < arr->capacity - 1)
	{
		*(arr->data + arr->size) = item;
		arr->size++;
	}
	else
	{
		ft_resize(arr);
		*(arr->data + arr->size) = item;
		arr->size++;
	}
}
