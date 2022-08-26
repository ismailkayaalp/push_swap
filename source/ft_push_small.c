/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikayaalp <ikayaalp@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:20:17 by ikayaalp          #+#    #+#             */
/*   Updated: 2022/08/23 16:20:19 by ikayaalp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_small_a(t_list **stackA, t_list **stackB, int flag)
{
	t_list	*head;

	head = *stackA;
	while (head->next != NULL)
	{
		if (head->index == 0 && flag == 0)
		{
			pb(stackA, stackB);
			break ;
		}
		if (head->index == 1 && flag == 1)
		{
			pb(stackA, stackB);
			break ;
		}
		ra(stackA);
		head = *stackA;
	}
}
