/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshao-ju <@42-bkk.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 09:31:16 by sshao-ju          #+#    #+#             */
/*   Updated: 2025/02/23 09:31:19 by sshao-ju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

void	ft_insert(t_ftArray *arr, int idx, int item)
{
	int	*data;

	data = arr->data;
	if (arr->size != 0)
	{
		if (idx < 0 || idx > arr->size - 1)
		{
			printf("Error!");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (idx < 0)
		{
			printf("Error!");
			exit(EXIT_FAILURE);
		}
	}
	if (arr->size == arr->capacity - 1)
		ft_resize(arr);
	memmove(data + idx + 1, data + idx, (arr->size - idx) * sizeof(int));
	*(arr->data + idx) = item;
	arr->size++;
}

void	ft_prepend(t_ftArray *arr, int item)
{
	ft_insert(arr, 0, item);
}

int	ft_pop(t_ftArray *arr)
{
	int	ret_val;

	if (arr->size == 0)
		exit(EXIT_FAILURE);
	ret_val = *(arr->data + arr->size - 1);
	arr->size--;
	if (arr->size == arr->capacity / 2)
		ft_resize(arr);
	return (ret_val);
}

void	ft_delete(t_ftArray *arr, int idx)
{
	int	*data;

	data = arr->data;
	if (arr->size != 0)
	{
		if (idx < 0 || idx > arr->size - 1)
		{
			printf("Error!");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (idx < 0)
		{
			printf("Error!");
			exit(EXIT_FAILURE);
		}
	}
	memmove(data + idx, data + idx + 1, (arr->size - idx) * sizeof(int));
	arr->size--;
	if (arr->size == arr->capacity / 2)
		ft_resize(arr);
}

void	ft_remove(t_ftArray *arr, int item)
{
	int	idx;
	int	*curr_ptr;

	idx = 0;
	curr_ptr = arr->data;
	while (idx < arr->size)
	{
		if (*(curr_ptr + idx) == item)
		{
			ft_delete(arr, idx);
			arr->size--;
		}
		idx++;
	}
}
