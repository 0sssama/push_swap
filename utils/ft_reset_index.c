/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:48:51 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/23 14:00:04 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reset_index(t_stack *stack)
{
	t_element		*current;
	unsigned int	i;

	if (stack->size == 0)
		return ;
	i = 0;
	current = ft_stack_bottom(stack);
	while (i < stack->size)
	{
		current->index = i;
		current = current->above;
		i++;
	}
}
