/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_in_big_side.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:24:09 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/10 13:13:47 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_in_big_side(t_stack *stack, t_element *elem)
{
	int			biggest;
	int			smallest;
	int			average_value;

	biggest = ft_stackmax(stack)->value;
	smallest = ft_stackmin(stack)->value;
	average_value = (biggest - smallest) / 2 + 1;
	return (elem->value >= average_value);
}
