/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 19:15:41 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/10 17:28:58 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	ft_error(char *str)
{
	ft_putstr_fd(str, 2);
	return (-1);
}

static int	ft_error_free(char *str, t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a);
	free(stack_b);
	ft_error(str);
	return (-1);
}

int	main(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			i;

	if (ft_check_strs(ac, av) || ft_check_int(ac, av) || ft_check_dups(ac, av))
		return (ft_error("Error\n"));
	if (ac <= 2)
		return (0);
	stack_a = ft_new_stack();
	stack_b = ft_new_stack();
	if (!stack_a || !stack_b)
		return (ft_error_free("Error\n", stack_a, stack_b));
	i = ac - 1;
	while (i >= 1)
		ft_push(stack_a, ft_new_element(ft_atoi(av[i--])));
	ft_read_stdin(stack_a, stack_b);
	if (ft_is_sorted(stack_a) && stack_a->size == (unsigned int)(ac - 1)
		&& stack_b->size == 0)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 2);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	return (0);
}
