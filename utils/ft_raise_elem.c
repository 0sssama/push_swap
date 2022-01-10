/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_raise_elem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:32:41 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/10 13:19:48 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_raise_elem(t_stack *stack, t_element *elem)
{
	if (stack->size <= 1)
		return ;
	if (elem->value == stack->top->value)
		return ;
	if (elem->index == stack->size - 2)
	{
		ra(stack, 0);
	}
	if (elem->index < stack->size / 2)
	{
		while (stack->top->value != elem->value)
			rra(stack, 0);
	}
	else
	{
		while (stack->top->value != elem->value)
			ra(stack, 0);
	}
}
