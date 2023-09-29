# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 20:26:37 by nvaubien          #+#    #+#              #
#    Updated: 2023/09/28 21:15:25 by nvaubien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME      = exec
CC        = c++
FLAGS     = -Wall -Wextra -Werror #-std=c++98

OBJS_DIR  = objs
SRCS_DIR  = srcs

SRCS      = $(SRCS_DIR)/Fixed.cpp		\
			$(SRCS_DIR)/my_tests.cpp	\

OBJS      = $(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

all: $(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	/bin/rm -f $(OBJS_DIR)/*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
