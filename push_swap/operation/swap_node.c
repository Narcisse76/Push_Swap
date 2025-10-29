/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:43:02 by trambure          #+#    #+#             */
/*   Updated: 2025/05/28 00:53:26 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/list.h"
#include "../utils/operation.h"
#include "../includes/libft/libft.h"

static void	swap_node(t_item **head)
{
	t_item	*first;
	t_item	*second;

	if (!*head || !(*head)->next)
		return ;
	first = *head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head = second;
}

void	sa(t_number *n)
{
	swap_node(&n->a);
}

void	sb(t_number *n)
{
	swap_node(&n->b);
}

void	ss(t_number *n)
{
	swap_node(&n->a);
	swap_node(&n->b);
}
