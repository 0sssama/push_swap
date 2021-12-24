/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:58:37 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/23 11:56:56 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element	*ft_stackmin(t_stack *stack)
{
	t_element		*current;
	t_element		*smallest;
	unsigned int	i;

	if (stack->size == 0)
		return (NULL);
	if (stack->size == 1)
		return (stack->top);
	i = 0;
	current = stack->top->below;
	smallest = stack->top;
	while (i < stack->size - 1)
	{
		if (current->value < smallest->value)
			smallest = current;
		current = current->below;
		i++;
	}
	return (smallest);
}
