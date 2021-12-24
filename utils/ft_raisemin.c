/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_raisemin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 11:30:05 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/23 13:56:18 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_raisemin(t_stack *stack)
{
	t_element	*min;

	if (stack->size <= 1)
		return ;
	min = ft_stackmin(stack);
	if (min->index == stack->top->index)
		return ;
	if (min->index == stack->size - 2)
		sa(stack, 0);
	else if (min->index < stack->size / 2)
	{
		while (stack->top->value != min->value)
			rra(stack, 0);
	}
	else
	{
		while (stack->top->value != min->value)
			ra(stack, 0);
	}
}
