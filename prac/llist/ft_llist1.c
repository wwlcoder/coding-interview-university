/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llist1.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshao-ju <@42-bkk.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:51:42 by sshao-ju          #+#    #+#             */
/*   Updated: 2025/02/26 14:51:53 by sshao-ju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_llist.h"

void	ft_check_addr(void *ptr)
{
	if (ptr == NULL)
	{
		printf("Invalid Pointer Address\n");
		exit(EXIT_FAILURE);
	}
}

t_slist	*ft_create_llist(int init_val)
{
	t_slist	*s_lst;
	t_node	*node;

	s_lst = malloc(sizeof(t_slist));
	node = malloc(sizeof(t_node));
	ft_check_addr(s_lst);
	ft_check_addr(node);
	node->data = init_val;
	node->next = NULL;
	s_lst->head = node;
	s_lst->tail = node;
	s_lst->size = 1;
	return (s_lst);
}

int	size(t_slist *lst)
{
	return (lst->size);
}

bool	empty(t_slist *lst)
{
	return (lst->head == NULL);
}

int	value_at(t_slist *lst, int idx)
{
	t_node	*tmp;

	if (idx < 0 || idx >= lst->size)
	{
		printf("Index out of bounds\n");
		exit(EXIT_FAILURE);
	}
	tmp = lst->head;
	while (tmp != NULL && idx >= 0)
	{
		tmp = tmp->next;
		idx--;
	}
	return (tmp->data);
}
