/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 10:29:27 by trambure          #+#    #+#             */
/*   Updated: 2025/05/28 02:37:09 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "list.h"
# include "operation.h"
# include "../includes/libft/libft.h"
# include "../includes/GNL/get_next_line.h"

t_item	*parse(char **args);
void	freeitem(t_item *item);
bool	check(t_item *item);
void	sort(t_number *number);
ssize_t	getpivot(t_number number, size_t index, size_t division);
size_t	getlen(t_item *item);
int		getmin(t_item *item);
int		getmax(t_item *item);
size_t	getindex(t_item *item, int nbr);
void	execute(t_number *number, char *operation);
void	sort_small(t_number *number);
void	dispatch(t_number *number, char *operation);

#endif
