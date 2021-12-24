/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 07:19:56 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/23 19:18:38 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_pop(t_stack *stack)
{
	t_element	*top;
	t_element	*second;
	int			top_value;

	if (stack->size == 0)
		return (0);
	top = stack->top;
	top_value = top->value;
	if (stack->size == 1)
		stack->top = NULL;
	else
	{
		second = top->below;
		stack->top = second;
		second->above = NULL;
	}
	free(top);
	top = NULL;
	stack->size--;
	return (top_value);
}
