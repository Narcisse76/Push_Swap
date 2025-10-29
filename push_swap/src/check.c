/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 23:59:32 by trambure          #+#    #+#             */
/*   Updated: 2025/05/28 00:00:20 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

bool	check(t_item *item)
{
	while (item && item->next)
	{
		if (item->data > item->next->data)
			return (false);
		item = item->next;
	}
	return (true);
}
