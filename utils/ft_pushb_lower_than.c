/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushb_lower_than.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 18:14:39 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/04 10:06:55 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rpr(t_stack *stack_a, t_stack *stack_b, int key, t_element *elem)
{
	ft_raise_elem(stack_a, elem);
	pb(stack_a, stack_b);
	ft_pushb_lower_than(stack_a, stack_b, key);
}

void	ft_pushb_lower_than(t_stack *stack_a, t_stack *stack_b, int key)
{
	t_element		*up;
	t_element		*down;
	unsigned int	i;

	i = 0;
	if (stack_a->size == 0)
		return ;
	up = stack_a->top;
	down = ft_stack_bottom(stack_a);
	while (ft_smaller(stack_a, key))
	{
		if (up->value <= key)
		{
			ft_rpr(stack_a, stack_b, key, up);
			break ;
		}
		else if (down->value <= key)
		{
			ft_rpr(stack_a, stack_b, key, down);
			break ;
		}
		up = up->below;
		down = down->above;
		i++;
	}
}
