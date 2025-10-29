/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 08:38:31 by trambure          #+#    #+#             */
/*   Updated: 2025/05/28 00:53:44 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

static void	push_node(t_item **dst, t_item **src)
{
	t_item	*tmp;

	if (!*src)
		return ;
	tmp = *src;
	*src = tmp->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	pa(t_number *n)
{
	push_node(&n->a, &n->b);
}

void	pb(t_number *n)
{
	push_node(&n->b, &n->a);
}
