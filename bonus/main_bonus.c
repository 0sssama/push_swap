/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 19:15:41 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/24 12:38:52 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	ft_error(char *str)
{
	ft_putstr_fd(str, 2);
	return (-1);
}

int	main(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			i;

	if (ft_check_strings(ac, av) || ft_check_edge(ac, av)
		|| ft_check_duplicates(ac, av))
		return (ft_error("Error\n"));
	if (ac <= 2)
		return (0);
	stack_a = ft_new_stack();
	stack_b = ft_new_stack();
	if (!stack_a || !stack_b)
		return (ft_error("Error\n"));
	i = ac - 1;
	while (i >= 1)
		ft_push(stack_a, ft_new_element(ft_atoi(av[i--])));
	ft_read_stdin(stack_a, stack_b);
	if (ft_is_sorted(stack_a))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 2);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	return (0);
}
