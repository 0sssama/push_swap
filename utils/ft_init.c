/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 11:46:21 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/24 18:56:45 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		pa(stack_a, stack_b);
}
