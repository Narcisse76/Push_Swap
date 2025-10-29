/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 00:50:09 by trambure          #+#    #+#             */
/*   Updated: 2025/05/28 00:54:31 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

bool	ft_equals(char *str1, char *str2)
{
	while (*str1 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 == *str2);
}

void	dispatch(t_number *number, char *operation)
{
	if (ft_equals(operation, "sa"))
		sa(number);
	else if (ft_equals(operation, "sb"))
		sb(number);
	else if (ft_equals(operation, "ss"))
		ss(number);
	else if (ft_equals(operation, "pa"))
		pa(number);
	else if (ft_equals(operation, "pb"))
		pb(number);
	else if (ft_equals(operation, "ra"))
		ra(number);
	else if (ft_equals(operation, "rb"))
		rb(number);
	else if (ft_equals(operation, "rr"))
		rr(number);
	else if (ft_equals(operation, "rra"))
		rra(number);
	else if (ft_equals(operation, "rrb"))
		rrb(number);
	else if (ft_equals(operation, "rrr"))
		rrr(number);
	else
		ft_putstr_fd("Error\n", 2);
}
