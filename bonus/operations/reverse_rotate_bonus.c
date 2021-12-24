/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:40:02 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/24 13:06:38 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	reverse_rotate(t_stack *stack)
{
	t_element	*bottom;

	if (!stack || stack->size == 1)
		return ;
	bottom = ft_new_element(ft_shift(stack));
	ft_push(stack, bottom);
	ft_reset_index(stack);
}

void	rra(t_stack *stack_a)
{
	reverse_rotate(stack_a);
}

void	rrb(t_stack *stack_b)
{
	reverse_rotate(stack_b);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
