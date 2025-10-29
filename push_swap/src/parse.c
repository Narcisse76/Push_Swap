/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 23:52:00 by trambure          #+#    #+#             */
/*   Updated: 2025/05/27 23:56:26 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

t_item	*item(int data)
{
	t_item	*ret;

	ret = malloc(sizeof(t_item));
	if (!ret)
		return (NULL);
	ret->data = data;
	ret->next = 0;
	return (ret);
}

bool	contain(t_item *item, int nbr)
{
	while (item)
	{
		if (item->data == nbr)
			return (true);
		item = item->next;
	}
	return (false);
}

void	freeitem(t_item *item)
{
	if (!item)
		return ;
	freeitem(item->next);
	free(item);
}

bool	getint(char *str, int *to)
{
	ssize_t	ret;
	int		multiply;

	multiply = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			multiply = -1;
		str++;
	}
	ret = 0;
	while (*str >= '0' && *str <= '9')
	{
		ret *= 10;
		ret += *str - '0';
		if ((multiply == 1 && ret > 2147483647)
			|| (multiply == -1 && ret > 2147483648))
			return (false);
		str++;
	}
	if (*str)
		return (false);
	*to = multiply * ret;
	return (true);
}

t_item	*parse(char **args)
{
	size_t	index;
	t_item	*list;
	t_item	*last;
	int		data;

	list = 0;
	index = 0;
	while (args[index])
	{
		if (!(getint(args[index++], &data))
			|| contain(list, data))
		{
			freeitem(list);
			return (0);
		}
		if (!list)
		{
			list = item(data);
			last = list;
			continue ;
		}
		last->next = item(data);
		last = last->next;
	}
	return (list);
}
