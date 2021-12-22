/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:12:02 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/22 09:51:21 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>

typedef struct s_element {
	struct s_element	*above;
	struct s_element	*below;
	long long			value;
}	t_element;

typedef struct s_stack {
	t_element	*top;
	int			size;
	int			sorted;
}	t_stack;

/*				 STACK UTILS			*/
t_stack		*ft_new_stack(void);
t_element	*ft_new_element(int content);
t_element	*ft_stack_bottom(t_stack *stack);
void		ft_push(t_stack *stack, t_element *new);
void		ft_free_stack(t_stack *stack);
int			ft_pop(t_stack *stack);
void		ft_unshift(t_stack *stack, t_element *new);
int			ft_shift(t_stack *stack);
/*			 STACK UTILS - END			*/

/*				PARSING UTILS			*/
int			ft_check_duplicates(int ac, char **av);
int			ft_check_edge(int ac, char **av);
int			ft_check_strings(int ac, char **av);
/*			PARSING UTILS - END			*/

/*			   SORTING UTILS			*/
int			ft_is_sorted(t_stack *stack);
/*			SORTING UTILS - END			*/

/*				 OPERATIONS				*/
//	sa-sb-ss
void		sa(t_stack *stack_a, int is_ss);
void		sb(t_stack *stack_b, int is_ss);
void		ss(t_stack *stack_a, t_stack *stack_b);
// pa-pb
void		pa(t_stack *stack_a, t_stack *stack_b);
void		pb(t_stack *stack_a, t_stack *stack_b);
// ra-rb-rr
void		ra(t_stack *stack_a, int is_rr);
void		rb(t_stack *stack_b, int is_rr);
void		rr(t_stack *stack_a, t_stack *stack_b);
// rra-rrb-rrr
void		rra(t_stack *stack_a, int is_rrr);
void		rrb(t_stack *stack_b, int is_rrr);
void		rrr(t_stack *stack_a, t_stack *stack_b);
/*			  OPERATIONS - END			*/

#endif