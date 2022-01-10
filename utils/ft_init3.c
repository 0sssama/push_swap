/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:59:07 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/04 10:04:10 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init3(t_stack *stack_a)
{
	t_element	*max;
	t_element	*min;
	t_element	*last_elem;

	if (stack_a->size <= 1 || ft_is_sorted(stack_a))
		return ;
	max = ft_stackmax(stack_a);
	min = ft_stackmin(stack_a);
	last_elem = ft_stack_bottom(stack_a);
	if (max == stack_a->top && min == last_elem)
	{
		sa(stack_a, 0);
		rra(stack_a, 0);
	}
	else if (max == last_elem && min != stack_a->top)
		sa(stack_a, 0);
	else if (max == stack_a->top && min != last_elem)
		ra(stack_a, 0);
	else if (max != last_elem && min == stack_a->top)
	{
		sa(stack_a, 0);
		ra(stack_a, 0);
	}
	else
		rra(stack_a, 0);
}
