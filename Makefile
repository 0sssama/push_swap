# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 14:17:39 by olabrahm          #+#    #+#              #
#    Updated: 2022/01/10 15:26:10 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror

FILES=	main utils/ft_new_element utils/ft_pop utils/ft_push utils/ft_shift \
		utils/ft_unshift utils/ft_stack_bottom utils/ft_free_stack \
		utils/ft_parsing utils/ft_is_sorted utils/ft_new_stack \
		utils/ft_stackmin utils/ft_raisemin utils/ft_init utils/ft_reset_index \
		operations/swap operations/push operations/rotate operations/reverse_rotate \
		utils/ft_init_highest utils/ft_init2 utils/ft_is_revsorted \
		utils/ft_pushb_lower_than utils/ft_raise_elem utils/ft_raisemax utils/ft_stackmax \
		utils/ft_smaller utils/ft_init3 utils/ft_init5 utils/ft_in_big_side \
		utils/ft_stackmin2
		
BONUS=	main utils/ft_new_element utils/ft_pop utils/ft_push utils/ft_shift \
		utils/ft_unshift utils/ft_stack_bottom utils/ft_free_stack \
		utils/ft_parsing utils/ft_is_sorted utils/ft_new_stack \
		utils/ft_stackmin utils/ft_raisemin utils/ft_init utils/ft_reset_index \
		operations/swap operations/push operations/rotate operations/reverse_rotate \
		utils/ft_read_stdin
		
BONUS_FILES=$(addprefix bonus/, $(addsuffix _bonus, $(BONUS)))
BONUS_OBJS=$(BONUS_FILES:=.o)
OBJS=	$(FILES:=.o)
BIN=	push_swap
BONUS_BIN= push_swap_checker
LIBFT_DIR= libft
LIBFT= $(addsuffix /libft.a, $(LIBFT_DIR))
INCLUDES= includes
BONUS_INCLUDES= bonus/includes
RM= rm -rf

.PHONY: all re clean fclean

%.o: %.c
	@$(CC) $(FLAGS) -I $(INCLUDES) -I $(BONUS_INCLUDES) -c $? -o $@

all: $(BIN)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(BIN): $(OBJS) $(LIBFT)
	@$(CC) $(FLAGS) -I $(INCLUDES) $(LIBFT) $(OBJS) -o $(BIN)
	@echo "Push_Swap done, GL!."

clean:
	@$(RM) $(OBJS)
	@$(RM) $(BONUS_OBJS)
	@$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	@$(RM) $(BIN)
	@$(RM) $(BONUS_BIN)
	@$(MAKE) fclean -C $(LIBFT_DIR)

bonus: $(BONUS_BIN)

$(BONUS_BIN): $(BONUS_OBJS) $(LIBFT)
	@$(CC) $(FLAGS) -I $(BONUS_INCLUDES) $(LIBFT) $(BONUS_OBJS) -o $(BONUS_BIN)
	@echo "Checker done, GL!"

gen: all clean
gen_bonus: bonus clean

re: fclean all