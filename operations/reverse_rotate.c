/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:40:02 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/23 13:56:39 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack *stack)
{
	t_element	*bottom;

	if (!stack || stack->size == 1)
		return ;
	bottom = ft_new_element(ft_shift(stack));
	ft_push(stack, bottom);
	ft_reset_index(stack);
}

void	rra(t_stack *stack_a, int is_rrr)
{
	reverse_rotate(stack_a);
	if (!is_rrr)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack *stack_b, int is_rrr)
{
	reverse_rotate(stack_b);
	if (!is_rrr)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a, 1);
	rrb(stack_b, 1);
	ft_putstr_fd("rrr\n", 1);
}
