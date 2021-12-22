/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:13:10 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/22 09:51:27 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack *stack)
{
	t_element	*current_elem;
	int			i;

	i = 0;
	if (stack->size == 0)
		return ;
	current_elem = stack->top;
	printf("-----\n");
	while (i < stack->size)
	{
		printf("- %lld -\n", current_elem->value);
		current_elem = current_elem->below;
		i++;
	}
	printf("-----\n");
}

static int	ft_error(char *str)
{
	ft_putstr_fd(str, 2);
	return (-1);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	if (ft_check_strings(ac, av) || ft_check_edge(ac, av)
		|| ft_check_duplicates(ac, av))
		return (ft_error("Error\n"));
	stack_a = ft_new_stack();
	stack_b = ft_new_stack();
	if (!stack_a || !stack_b)
		return (ft_error("Error\n"));
	i = ac - 1;
	while (i >= 1)
		ft_push(stack_a, ft_new_element(ft_atoi(av[i--])));
	printf("before: \n");
	ft_print_stack(stack_a);
	printf("after: \n");
	rra(stack_a, 0);
	ft_print_stack(stack_a);
	if (ft_is_sorted(stack_a))
		ft_putstr_fd("Stack is sorted!\n", 1);
	else
		ft_putstr_fd("Stack is not sorted! :(\n", 1);
	ft_free_stack(stack_a);
	return (0);
}
