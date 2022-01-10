/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmin2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:21:35 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/10 16:32:45 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element	*ft_stackmin2(t_stack *stack)
{
	t_element		*current;
	t_element		*smallest2;
	unsigned int	i;

	i = 0;
	current = stack->top;
	smallest2 = NULL;
	while (++i <= stack->size)
	{
		if (current == ft_stackmin(stack))
		{
			current = current->below;
			continue ;
		}
		if (!smallest2)
			smallest2 = current;
		else if (smallest2->value - ft_stackmin(stack)->value
			> current->value - ft_stackmin(stack)->value)
			smallest2 = current;
		current = current->below;
	}
	return (smallest2);
}
