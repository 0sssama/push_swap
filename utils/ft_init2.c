/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 18:03:54 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/10 16:34:43 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_continue_on_a(t_stack *stack_a, t_stack *stack_b, int max)
{
	if (stack_a->size == 2)
		sa(stack_a, 0);
	else if (stack_a->size == 3)
		ft_init3(stack_a);
	else
	{
		while (stack_a->size > 3)
			ft_pushb_lower_than(stack_a, stack_b, max);
		ft_init3(stack_a);
	}
}

void	ft_init2(t_stack *stack_a, t_stack *stack_b, int len)
{
	int		min;
	int		max;
	int		key;
	int		i;
	int		c;

	min = ft_stackmin(stack_a)->value;
	max = ft_stackmax(stack_a)->value;
	if (len <= 100)
		c = 5;
	else
		c = 10;
	key = (max - min) / c + 1;
	i = 1;
	while (i <= c)
	{
		if (stack_a->size <= 3 || ft_is_sorted(stack_a))
			break ;
		ft_pushb_lower_than(stack_a, stack_b, key * i);
		i++;
	}
	if (stack_a->size != 0 && !ft_is_sorted(stack_a))
		ft_continue_on_a(stack_a, stack_b, max);
	ft_init_highest(stack_a, stack_b);
}
