/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 08:44:47 by trambure          #+#    #+#             */
/*   Updated: 2025/05/28 00:53:31 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/list.h"
#include "../utils/operation.h"
#include "../includes/libft/libft.h"

static void	rotate_node(t_item **head)
{
	t_item	*first;
	t_item	*tail;

	if (!*head || !(*head)->next)
		return ;
	first = *head;
	*head = first->next;
	first->next = NULL;
	tail = *head;
	while (tail->next)
		tail = tail->next;
	tail->next = first;
}

void	ra(t_number *n)
{
	rotate_node(&n->a);
}

void	rb(t_number *n)
{
	rotate_node(&n->b);
}

void	rr(t_number *number)
{
	rotate_node(&number->a);
	rotate_node(&number->b);
}
