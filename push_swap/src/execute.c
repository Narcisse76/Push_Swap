/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 00:34:08 by trambure          #+#    #+#             */
/*   Updated: 2025/05/28 00:53:26 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	execute(t_number *number, char *operation)
{
	dispatch(number, operation);
	ft_putstr_fd(operation, 1);
	ft_putchar_fd('\n', 1);
}
