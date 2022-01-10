/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_highest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 18:31:31 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/03 10:48:52 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_highest(t_stack *stack_a, t_stack *stack_b)
{
	if (ft_is_revsorted(stack_b))
	{
		while (stack_b->top)
			pa(stack_a, stack_b);
		return ;
	}
	while (stack_b->top)
	{
		ft_raisemax(stack_b, 'b');
		pa(stack_a, stack_b);
	}
}
