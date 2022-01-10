/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_revsorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 18:33:38 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/03 10:36:11 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_revsorted(t_stack *stack)
{
	t_element		*current_node;
	unsigned int	i;

	if (stack->size <= 1)
		return (1);
	current_node = stack->top->below;
	i = 0;
	while (i < stack->size && current_node)
	{
		if (current_node->above->value < current_node->value)
			return (0);
		i++;
		current_node = current_node->below;
	}
	return (1);
}
