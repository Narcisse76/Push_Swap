/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:23:13 by trambure          #+#    #+#             */
/*   Updated: 2025/05/28 00:53:26 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/list.h"
#include "../utils/operation.h"
#include "../includes/libft/libft.h"

static void	reverse_rotate_node(t_item **head)
{
	t_item	*prev;
	t_item	*last;

	if (!*head || !(*head)->next)
		return ;
	prev = NULL;
	last = *head;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *head;
	*head = last;
}

void	rra(t_number *n)
{
	reverse_rotate_node(&n->a);
}

void	rrb(t_number *n)
{
	reverse_rotate_node(&n->b);
}

void	rrr(t_number *n)
{
	reverse_rotate_node(&n->a);
	reverse_rotate_node(&n->b);
}
