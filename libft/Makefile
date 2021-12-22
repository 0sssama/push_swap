# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 13:16:18 by olabrahm          #+#    #+#              #
#    Updated: 2021/12/21 09:02:28 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
MANDATORY =	ft_putchar_fd ft_putstr_fd ft_atoi ft_isdigit
BONUS=		ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
			ft_lstdelone ft_lstclear ft_lstiter ft_lstmap
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