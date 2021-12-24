/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:12:02 by olabrahm          #+#    #+#             */
/*   Updated: 2021/12/24 13:06:23 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"
# include <stdio.h>

typedef struct s_element {
	struct s_element	*above;
	struct s_element	*below;
	unsigned int		index;
	long long			value;
}	t_element;

typedef struct s_stack {
	t_element		*top;
	unsigned int	size;
	int				sorted;
}	t_stack;

/*				 STACK UTILS			*/
t_stack		*ft_new_stack(void);
t_element	*ft_new_element(int content);
t_element	*ft_stack_bottom(t_stack *stack);
t_element	*ft_stackmin(t_stack *stack);
void		ft_raisemin(t_stack *stack);
void		ft_push(t_stack *stack, t_element *new);
void		ft_free_stack(t_stack *stack);
void		ft_unshift(t_stack *stack, t_element *new);
void		ft_reset_index(t_stack *stack);
int			ft_pop(t_stack *stack);
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
void		sa(t_stack *stack_a);
void		sb(t_stack *stack_b);
void		ss(t_stack *stack_a, t_stack *stack_b);
// pa-pb
void		pa(t_stack *stack_a, t_stack *stack_b);
void		pb(t_stack *stack_a, t_stack *stack_b);
// ra-rb-rr
void		ra(t_stack *stack_a);
void		rb(t_stack *stack_b);
void		rr(t_stack *stack_a, t_stack *stack_b);
// rra-rrb-rrr
void		rra(t_stack *stack_a);
void		rrb(t_stack *stack_b);
void		rrr(t_stack *stack_a, t_stack *stack_b);
/*			  OPERATIONS - END			*/

/*				 OTHERS				*/
void		ft_init(t_stack *stack_a, t_stack *stack_b);
void		ft_read_stdin(t_stack *stack_a, t_stack *stack_b);
/*			  OTHERS - END			*/

#endif