/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikayaalp <ikayaalp@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:20:37 by ikayaalp          #+#    #+#             */
/*   Updated: 2022/08/23 16:20:39 by ikayaalp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*get_next_min(t_list **stack)
{
	t_list	*tmp;
	t_list	*min;
	int		flag;

	tmp = *stack;
	flag = 0;
	min = NULL;
	if (!tmp)
		return (NULL);
	while (tmp)
	{
		if ((tmp->index == -1) && (!flag || tmp->content < min->content))
		{
			flag = 1;
			min = tmp;
		}
		tmp = tmp->next;
	}
	return (min);
}

void	index_stack(t_list **stack)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = get_next_min(stack);
	while (tmp)
	{
		tmp->index = i++;
		tmp = get_next_min(stack);
	}
}
