/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshao-ju <@42-bkk.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 06:54:14 by sshao-ju          #+#    #+#             */
/*   Updated: 2025/02/24 06:54:16 by sshao-ju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

void	ft_run_tests(void)
{
	printf("Running ft_test_init now.\n");
	ft_test_init();
	printf("Running ft_test_push now.\n");
	ft_test_push();
	printf("Running ft_test_empty now.\n");
	ft_test_empty();
	printf("Running ft_test_at now.\n");
	ft_test_at();
}

void	ft_test_init(void)
{
	t_ftArray	*new_arr;

	new_arr = ft_array_new(5);
	if (new_arr)
	{
		printf("Array created.\n");
		printf("Size %d and capacity %d.\n", new_arr->size, new_arr->capacity);
	}
	else
		printf("Failed to create array");
	ft_free_arr(new_arr);
}

void	ft_test_push(void)
{
	t_ftArray	*new_arr;
	int			push_attempt;

	new_arr = ft_array_new(5);
	push_attempt = 0;
	while (push_attempt < 32)
	{
		ft_push(new_arr, 1);
		push_attempt++;
	}
	printf("Current: Size %d and cap %d.\n", new_arr->size, new_arr->capacity);
	ft_free_arr(new_arr);

}

void	ft_test_empty(void)
{
	t_ftArray	*new_arr;

	new_arr = ft_array_new(5);
	printf("Array is current empty? %d\n", ft_arr_is_empty(new_arr));
	ft_push(new_arr, 1);
	printf("Array is current empty? %d\n", ft_arr_is_empty(new_arr));
	ft_free_arr(new_arr);
}

void	ft_test_at(void)
{
	t_ftArray	*new_arr;
	int			push_attempt;
	int			push_value;

	new_arr = ft_array_new(5);
	push_attempt = 0;
	push_value = 0;
	while (push_attempt < 36)
	{
		ft_push(new_arr, push_value);
		push_value++;
		push_attempt++;
	}
	printf("Element %d is at position %d.\n", *(new_arr->data + 1), ft_at(new_arr, 1));
	ft_free_arr(new_arr);
}
