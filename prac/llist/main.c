/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshao-ju <@42-bkk.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:53:58 by sshao-ju          #+#    #+#             */
/*   Updated: 2025/02/26 18:54:03 by sshao-ju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_llist.h"

int	main(void)
{
	t_slist	*new_lst;
	t_node	*temp;
	int		push_val;

	new_lst = ft_create_llist(99);
	push_val = 98;
	while (push_val > 90)
	{
		push_front(new_lst, push_val);
		push_val--;
	}
	push_back(new_lst, 9999);
	push_back(new_lst, 99999);
	pop_back(new_lst);
	temp = new_lst->head;
	printf("%d\n", size(new_lst));
	while (temp->next != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	printf("End of Program");
}
