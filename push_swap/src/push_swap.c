/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 23:50:01 by trambure          #+#    #+#             */
/*   Updated: 2025/07/16 19:31:02 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	free_split(char **arr)
{
	int	i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

int	main(int argc, char **argv)
{
	t_number	number;
	char		**split;

	(void)argc;
	if (!*argv)
		return (0);
	split = NULL;
	if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		number = (t_number){parse(split), 0};
	}
	else
		number = (t_number){parse(++argv), 0};
	if (!number.a)
	{
		ft_putstr_fd("Error\n", 2);
		free_split(split);
		return (1);
	}
	if (!check(number.a))
		sort(&number);
	free((freeitem(number.a), freeitem(number.b), free_split(split), NULL));
	return (0);
}
