/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 07:14:52 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/22 09:07:57 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack *stack, t_element *new)
{
	if (!new || !stack)
		return ;
	new->above = NULL;
	if (stack->size > 0)
	{
		new->below = stack->top;
		(stack->top)->above = new;
	}
	else
		new->below = NULL;
	stack->top = new;
	stack->size++;
}
