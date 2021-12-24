# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 13:16:18 by olabrahm          #+#    #+#              #
#    Updated: 2021/12/24 13:04:44 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
MANDATORY =	ft_putchar_fd ft_putstr_fd ft_atoi ft_isdigit ft_strlen ft_strdup \
			ft_strjoin ft_strcmp
OBJS=$(MANDATORY:=.o)
BNS_OBJS =$(BONUS:=.o)
NAME=libft.a
AR= ar rc

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Libft created."

bonus: all $(BNS_OBJS)
	@$(AR) $(NAME) $(BNS_OBJS)
	@echo "Bonus added."

%.o: %.c
	@$(CC) $(FLAGS) -c $? -o $@

clean:
	@rm -f $(OBJS) $(BNS_OBJS)
	@echo "Object files cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "Binary files cleaned."

re: fclean all