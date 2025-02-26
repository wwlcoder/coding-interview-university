/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshao-ju <@42-bkk.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:13:10 by sshao-ju          #+#    #+#             */
/*   Updated: 2025/02/22 14:13:51 by sshao-ju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

int	ft_check_capacity(int capacity)
{
	int			arr_capacity;

	arr_capacity = g_initial_capacity;
	while (capacity)
	{
		capacity /= g_growth_factor;
		arr_capacity *= g_growth_factor;
	}
	if (arr_capacity > g_min_capacity)
		return (arr_capacity);
	else
		return (g_min_capacity);
}

void	ft_check_addr(void *ptr)
{
	if (ptr == NULL)
	{
		write(1, "Unable to allocate memory.\n", 27);
		exit(EXIT_FAILURE);
	}
}

t_ftArray	*ft_array_new(int capacity)
{
	t_ftArray	*ft_array;

	ft_array = malloc(sizeof(t_ftArray));
	ft_check_addr(ft_array);
	ft_array->capacity = ft_check_capacity(capacity);
	ft_array->size = 0;
	ft_array->data = malloc(sizeof(int) * ft_array->capacity);
	ft_check_addr(ft_array->data);
	return (ft_array);
}

void	ft_free_arr(t_ftArray *arr)
{
	free(arr->data);
	free(arr);
	printf("Array freed.\n");
}

int	ft_size(t_ftArray *arr)
{
	return (arr->size);
}
