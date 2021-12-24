/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:21:00 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/23 19:19:18 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_shift(t_stack *stack)
{
	t_element	*bottom;
	t_element	*before_bottom;
	int			bottom_value;

	if (!stack || stack->size == 0)
		return (0);
	bottom = ft_stack_bottom(stack);
	bottom_value = bottom->value;
	if (stack->size == 1)
		stack->top = NULL;
	else
	{
		before_bottom = bottom->above;
		before_bottom->below = NULL;
	}
	stack->size--;
	free(bottom);
	bottom = NULL;
	return (bottom_value);
}
