/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stdin_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 12:25:17 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/04 10:12:00 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	ft_error(char *str, t_stack *stack_a, t_stack *stack_b, char *inst)
{
	ft_putstr_fd(str, 1);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	free(inst);
	inst = NULL;
	exit(-1);
}

static int	ft_apply_instruction2(char *inst, t_stack *stack_a,
									t_stack *stack_b)
{
	if (!ft_strcmp(inst, "ra"))
		ra(stack_a);
	else if (!ft_strcmp(inst, "rb"))
		rb(stack_b);
	else if (!ft_strcmp(inst, "rr"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(inst, "rra"))
		rra(stack_a);
	else if (!ft_strcmp(inst, "rrb"))
		rrb(stack_b);
	else if (!ft_strcmp(inst, "rrr"))
		rrr(stack_a, stack_b);
	else
		return (0);
	return (1);
}

static void	ft_apply_instruction(char *inst, t_stack *stack_a, t_stack *stack_b)
{
	if (!inst)
		return ;
	if (!ft_strcmp(inst, "sa"))
		sa(stack_a);
	else if (!ft_strcmp(inst, "sb"))
		sb(stack_b);
	else if (!ft_strcmp(inst, "ss"))
		ss(stack_a, stack_b);
	else if (!ft_strcmp(inst, "pa"))
		pa(stack_a, stack_b);
	else if (!ft_strcmp(inst, "pb"))
		pb(stack_a, stack_b);
	else if (!ft_apply_instruction2(inst, stack_a, stack_b))
	{
		ft_error("Error\n", stack_a, stack_b, inst);
	}
}

void	ft_read_stdin(t_stack *stack_a, t_stack *stack_b)
{
	char	*instruction;
	char	c;

	instruction = NULL;
	while (read(0, &c, 1))
	{
		if (c == '\n')
		{
			ft_apply_instruction(instruction, stack_a, stack_b);
			free(instruction);
			instruction = ft_strdup("");
		}
		else
			instruction = ft_strjoin(instruction, c);
	}
	free(instruction);
}
