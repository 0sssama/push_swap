/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unshift_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:06:39 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/23 19:19:31 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_unshift(t_stack *stack, t_element *new)
{
	t_element	*stack_bottom;

	if (!new || !stack)
		return ;
	new->below = NULL;
	if (stack->size > 0)
	{
		stack_bottom = ft_stack_bottom(stack);
		new->above = stack_bottom;
		stack_bottom->below = new;
	}
	else
	{
		stack->top = new;
		new->above = NULL;
	}
	stack->size++;
}
