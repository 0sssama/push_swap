/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:18:06 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/23 13:53:01 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack *stack)
{
	t_element	*top;

	if (!stack || stack->size <= 1)
		return ;
	top = ft_new_element(ft_pop(stack));
	ft_unshift(stack, top);
	ft_reset_index(stack);
}

void	ra(t_stack *stack_a, int is_rr)
{
	rotate(stack_a);
	if (!is_rr)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack *stack_b, int is_rr)
{
	rotate(stack_b);
	if (!is_rr)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a, 1);
	rb(stack_b, 1);
	ft_putstr_fd("rr\n", 1);
}
