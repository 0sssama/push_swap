/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:54:30 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/21 16:49:27 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(t_stack *stack)
{
	t_element	*current_node;
	int			i;

	if (stack->size <= 1)
		return (1);
	current_node = stack->top->below;
	i = 0;
	while (i < stack->size && current_node)
	{
		if (current_node->above->value > current_node->value)
			return (0);
		i++;
		current_node = current_node->below;
	}
	return (1);
}
