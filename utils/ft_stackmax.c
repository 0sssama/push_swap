/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmax.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 18:06:57 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/24 18:08:47 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element	*ft_stackmax(t_stack *stack)
{
	t_element		*current;
	t_element		*highest;
	unsigned int	i;

	if (stack->size == 0)
		return (NULL);
	if (stack->size == 1)
		return (stack->top);
	i = 0;
	current = stack->top->below;
	highest = stack->top;
	while (i < stack->size - 1)
	{
		if (current->value > highest->value)
			highest = current;
		current = current->below;
		i++;
	}
	return (highest);
}
