/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llist.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshao-ju <@42-bkk.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:50:21 by sshao-ju          #+#    #+#             */
/*   Updated: 2025/02/26 14:51:34 by sshao-ju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LLIST_H
# define FT_LLIST_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct node
{
	int			data;
	struct node	*next;
}	t_node;

typedef struct slist
{
	struct node	*head;
	struct node	*tail;
	int			size;
}	t_slist;

bool	empty(t_slist *lst);
void	ft_check_addr(void *ptr);
t_slist	*ft_create_llist(int init_val);
int		size(t_slist *lst);
int		value_at(t_slist *lst, int idx);
void	push_front(t_slist *lst, int value);
int		pop_front(t_slist *lst);
int		pop_back(t_slist *lst);
void	push_back(t_slist *lst, int value);

#endif
