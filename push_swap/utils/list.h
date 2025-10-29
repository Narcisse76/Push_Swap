/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:39:15 by trambure          #+#    #+#             */
/*   Updated: 2025/05/24 10:36:11 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_item	t_item;

struct		s_item
{
	int		data;
	t_item	*next;
};

typedef struct s_number
{
	t_item	*a;
	t_item	*b;
}		t_number;
#endif
