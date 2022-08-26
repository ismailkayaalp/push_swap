/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sourt_four.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikayaalp <ikayaalp@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:20:31 by ikayaalp          #+#    #+#             */
/*   Updated: 2022/08/23 16:20:33 by ikayaalp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sourt_four(t_list **stackA, t_list **stackB)
{
	int	flag;

	flag = 0;
	ft_push_small_a(stackA, stackB, flag);
	ft_sort_three(stackA);
	pa(stackA, stackB);
}
