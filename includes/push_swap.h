/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:12:02 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/10 15:26:01 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
t_element	*ft_stackmin2(t_stack *stack);
t_element	*ft_stackmax(t_stack *stack);
void		ft_raisemax(t_stack *stack, char c);
void		ft_raisemin(t_stack *stack);
void		ft_raise_elem(t_stack *stack, t_element *element);
void		ft_push(t_stack *stack, t_element *new);
void		ft_free_stack(t_stack *stack);
void		ft_unshift(t_stack *stack, t_element *new);
void		ft_reset_index(t_stack *stack);
int			ft_pop(t_stack *stack);
int			ft_shift(t_stack *stack);
int			ft_smaller(t_stack *stack, int key);
int			ft_in_big_side(t_stack *stack, t_element *elem);
/*			 STACK UTILS - END			*/

/*				PARSING UTILS			*/
int			ft_check_duplicates(int ac, char **av);
int			ft_check_edge(int ac, char **av);
int			ft_check_strings(int ac, char **av);
/*			PARSING UTILS - END			*/

/*			   SORTING UTILS			*/
int			ft_is_sorted(t_stack *stack);
int			ft_is_revsorted(t_stack *stack);
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

/*				 OTHERS				*/
void		ft_init(t_stack *stack_a, t_stack *stack_b);
void		ft_init2(t_stack *stack_a, t_stack *stack_b, int len);
void		ft_init3(t_stack *stack_a);
void		ft_init5(t_stack *stack_a, t_stack *stack_b);
void		ft_pushb_lower_than(t_stack *stack_a, t_stack *stack_b, int key);
void		ft_init_highest(t_stack *stack_a, t_stack *stack_b);
/*			  OTHERS - END			*/

#endif