# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 20:26:37 by nvaubien          #+#    #+#              #
#    Updated: 2023/12/27 16:44:15 by nvaubien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME      = bureaucrat
CC        = c++
FLAGS     = -Wall -Wextra -Werror -std=c++98

OBJS_DIR  = objs
SRCS_DIR  = srcs

SRCS      = $(SRCS_DIR)/main.cpp			\
			$(SRCS_DIR)/Bureaucrat.cpp			\
			$(SRCS_DIR)/Form.cpp			\

OBJS      = $(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

all: $(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	/bin/rm -rf $(OBJS_DIR)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re⏎ 