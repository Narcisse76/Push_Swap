/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 00:35:52 by trambure          #+#    #+#             */
/*   Updated: 2025/05/28 01:03:39 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	sort_three(t_number *number)
{
	size_t	index;

	if (!number->a || !number->a->next || check(number->a))
		return ;
	index = getindex(number->a, getmax(number->a));
	if (index == 0)
		execute(number, "ra");
	else if (index == 1)
		execute(number, "rra");
	if (number->a->data > number->a->next->data)
		execute(number, "sa");
}

void	sort_small(t_number *number)
{
	size_t	index;
	size_t	len;

	len = getlen(number->a);
	while (len > 3)
	{
		index = getindex(number->a, getmin(number->a));
		if (index < len / 2)
			while (index--)
				execute(number, "ra");
		else
			while (index++ < len)
				execute(number, "rra");
		execute(number, "pb");
		len = getlen(number->a);
	}
	sort_three(number);
	while (number->b)
		execute(number, "pa");
}
