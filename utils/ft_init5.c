/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:11:05 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/10 16:29:14 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_element	*ft_closest_smallest(t_stack *stack_a)
{
	t_element	*smallest;
	t_element	*smallest2;
	t_element	*top;
	t_element	*bottom;

	smallest = ft_stackmin(stack_a);
	smallest2 = ft_stackmin2(stack_a);
	top = stack_a->top;
	bottom = ft_stack_bottom(stack_a);
	if (smallest == top || smallest == bottom)
		return (smallest);
	if (smallest2 == top || smallest2 == bottom)
		return (smallest2);
	if (smallest == top->below || smallest == bottom->above)
		return (smallest);
	if (smallest2 == top->below || smallest2 == bottom->above)
		return (smallest2);
	return (NULL);
}

void	ft_init5(t_stack *stack_a, t_stack *stack_b)
{
	t_element	*closest_smallest;

	if (ft_is_sorted(stack_a))
		return ;
	closest_smallest = ft_closest_smallest(stack_a);
	if (!closest_smallest)
		return ;
	ft_raise_elem(stack_a, closest_smallest);
	pb(stack_a, stack_b);
	ft_raisemin(stack_a);
	pb(stack_a, stack_b);
	if (!ft_is_sorted(stack_a))
		ft_init3(stack_a);
	if (ft_is_sorted(stack_b))
		sb(stack_b, 0);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
