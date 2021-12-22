/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:21:00 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/21 21:18:33 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	t_element	*new_top;
	t_element	*new_second;
	int			top;
	int			second;

	if (stack->size <= 1)
		return ;
	top = ft_pop(stack);
	second = ft_pop(stack);
	new_top = ft_new_element(second);
	new_second = ft_new_element(top);
	ft_push(stack, new_second);
	ft_push(stack, new_top);
}

void	sa(t_stack *stack_a, int is_ss)
{
	swap(stack_a);
	if (!is_ss)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *stack_b, int is_ss)
{
	swap(stack_b);
	if (!is_ss)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a, 1);
	sb(stack_b, 1);
	ft_putstr_fd("ss\n", 1);
}
