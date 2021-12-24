/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 11:46:21 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/23 19:18:17 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_init(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size <= 1 || ft_is_sorted(stack_a))
		return ;
	while (!ft_is_sorted(stack_a))
	{
		ft_raisemin(stack_a);
		pb(stack_a, stack_b);
	}
	while (stack_b->top)
	{
		pa(stack_a, stack_b);
	}
}
/*
A:
52
4
85
55
88
12
64
13
84
952
54
82
645

B:
1

*/