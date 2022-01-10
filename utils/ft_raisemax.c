/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_raisemax.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 18:36:00 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/10 13:51:55 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sasb(t_stack *stack, char c)
{
	if (c == 'a')
		sa(stack, 0);
	else if (c == 'b')
		sb(stack, 0);
}

static void	rrarrb(t_stack *stack, char c)
{
	if (c == 'a')
		rra(stack, 0);
	else if (c == 'b')
		rrb(stack, 0);
}

static void	rarb(t_stack *stack, char c)
{
	if (c == 'a')
		ra(stack, 0);
	else if (c == 'b')
		rb(stack, 0);
}

void	ft_raisemax(t_stack *stack, char c)
{
	t_element	*max;

	if (stack->size <= 1)
		return ;
	max = ft_stackmax(stack);
	if (max->index == stack->top->index)
		return ;
	if (max->index == stack->size - 2)
		sasb(stack, c);
	else if (max->index < stack->size / 2)
	{
		while (stack->top->value != max->value)
			rrarrb(stack, c);
	}
	else
	{
		while (stack->top->value != max->value)
			rarb(stack, c);
	}
}
