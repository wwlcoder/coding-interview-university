/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llist2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshao-ju <@42-bkk.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:39:47 by sshao-ju          #+#    #+#             */
/*   Updated: 2025/02/26 16:39:49 by sshao-ju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_llist.h"

void	push_front(t_slist *lst, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	ft_check_addr(new_node);
	new_node->data = value;
	new_node->next = lst->head;
	lst->head = new_node;
	if (lst->size == 0)
		lst->tail = new_node;
	lst->size++;
}

int	pop_front(t_slist *lst)
{
	int		ret_val;
	t_node	*tmp;

	if (lst->head == NULL)
	{
		printf("List is empty\n");
		exit(EXIT_FAILURE);
	}
	ret_val = lst->head->data;
	tmp = lst->head;
	lst->head = tmp->next;
	if (lst->head == NULL)
		lst->tail = NULL;
	lst->size--;
	free(tmp);
	return (ret_val);
}

void	push_back(t_slist *lst, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	ft_check_addr(new_node);
	new_node->data = value;
	new_node->next = NULL;
	if (lst->tail != NULL)
		lst->tail->next = new_node;
	lst->tail = new_node;
	if (lst->size == 0)
		lst->head = new_node;
	lst->size++;
}

int	pop_back(t_slist *lst)
{
	int		ret_val;
	t_node	*tmp;

	if (lst->tail == NULL)
	{
		printf("List is empty\n");
		exit(EXIT_FAILURE);
	}
	ret_val = lst->tail->data;
	tmp = lst->head;
	while (tmp->next != lst->tail)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
	free(lst->tail);
	tmp->next = NULL;
	lst->tail = tmp;
	lst->size--;
	return (ret_val);
}

int	front(t_slist *lst)
{
	return (lst->head->data);
}
