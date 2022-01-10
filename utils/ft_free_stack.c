/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 08:03:21 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/10 17:33:11 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack *stack)
{
	t_element		*current_elem;
	t_element		*next_elem;
	
	if (stack->size == 0)
	{
		free(stack);
		stack = NULL;
		return ;
	}
	current_elem = stack->top;
	while (current_elem)
	{
		next_elem = current_elem->below;
		free(current_elem);
		current_elem = NULL;
		current_elem = next_elem;
	}
	free(stack);
	stack = NULL;
}
