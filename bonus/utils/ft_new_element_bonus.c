/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_element_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 07:41:21 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/23 19:18:26 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_element	*ft_new_element(int content)
{
	t_element	*new_element;

	new_element = (t_element *) malloc(1 * sizeof(t_element));
	if (!new_element)
		return (NULL);
	new_element->value = content;
	new_element->above = NULL;
	new_element->below = NULL;
	return (new_element);
}
