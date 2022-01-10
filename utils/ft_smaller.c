/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smaller.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:15:40 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/03 13:17:59 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_smaller(t_stack *stack, int key)
{
	t_element		*current;
	unsigned int	i;

	if (stack->size == 0)
		return (0);
	i = 0;
	current = stack->top;
	while (i < stack->size)
	{
		if (current->value <= key)
			return (1);
		current = current->below;
		i++;
	}
	return (0);
}
