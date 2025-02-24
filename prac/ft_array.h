/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshao-ju <@42-bkk.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:28:32 by sshao-ju          #+#    #+#             */
/*   Updated: 2025/02/22 19:29:30 by sshao-ju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_H
# define FT_ARRAY_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdbool.h>

static const int	g_min_capacity = 16;
static const int	g_growth_factor = 2;
static const int	g_initial_capacity = 1;

typedef struct ftArray
{
	int	size;
	int	capacity;
	int	*data;
}	t_ftArray;

// Functions
int			ft_check_capacity(int capacity);
void		ft_check_addr(void *ptr);
t_ftArray	*ft_array_new(int capacity);
void		ft_free_arr(t_ftArray *arr);
int			ft_size(t_ftArray *arr);
int			ft_capacity(t_ftArray *arr);
bool		ft_arr_is_empty(t_ftArray *arr);
int			ft_at(t_ftArray *arr, int index);
void		ft_resize(t_ftArray *arr);
void		ft_push(t_ftArray *arr, int item);
void		ft_insert(t_ftArray *arr, int idx, int item);
void		ft_prepend(t_ftArray *arr, int item);
int			ft_pop(t_ftArray *arr);
void		ft_delete(t_ftArray *arr, int idx);
void		ft_remove(t_ftArray *arr, int item);

// Tests to fun
void		ft_run_tests(void);
void		ft_test_init(void);
void		ft_test_push(void);
void		ft_test_empty(void);
void		ft_test_at(void);

#endif
