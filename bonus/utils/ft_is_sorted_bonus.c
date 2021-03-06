/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:54:30 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/23 19:18:22 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_is_sorted(t_stack *stack)
{
	t_element		*current_node;
	unsigned int	i;

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
