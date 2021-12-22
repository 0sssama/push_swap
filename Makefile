# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 14:17:39 by olabrahm          #+#    #+#              #
#    Updated: 2021/12/22 09:51:02 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
FILES=	main utils/ft_new_element utils/ft_pop utils/ft_push utils/ft_shift \
		utils/ft_unshift utils/ft_stack_bottom utils/ft_free_stack \
		utils/ft_parsing utils/ft_is_sorted utils/ft_new_stack \
		operations/swap operations/push operations/rotate operations/reverse_rotate
OBJS=	$(FILES:=.o)
BIN=	push_swap
LIBFT_DIR= libft
LIBFT= $(addsuffix /libft.a, $(LIBFT_DIR))
INCLUDES= includes
RM= rm -rf

.PHONY: all re clean fclean

%.o: %.c
	@$(CC) $(FLAGS) -I $(INCLUDES) -c $? -o $@

all: $(BIN)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(BIN): $(OBJS) $(LIBFT)
	@$(CC) $(FLAGS) -I $(INCLUDES) $(LIBFT) $(OBJS) -o $(BIN)
	@echo "All done, champion."


clean:
	@$(RM) $(OBJS)
	@$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	@$(RM) $(BIN)
	@$(MAKE) fclean -C $(LIBFT_DIR)

gen: all clean

re: fclean all