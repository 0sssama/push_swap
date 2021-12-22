/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_bottom.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 07:12:47 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/21 07:58:50 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element	*ft_stack_bottom(t_stack *stack)
{
	t_element	*bottom;

	if (stack->size == 0)
		return (NULL);
	if (stack->size == 1)
		return (stack->top);
	bottom = stack->top;
	while (bottom->below)
		bottom = bottom->below;
	return (bottom);
}
