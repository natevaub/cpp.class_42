# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 14:38:38 by nvaubien          #+#    #+#              #
#    Updated: 2023/10/15 13:26:13 by nvaubien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME      = accounts
CC        = c++
FLAGS     = -Wall -Wextra -Werror -std=c++98

OBJS_DIR  = objs
SRCS_DIR  = srcs

SRCS      = $(SRCS_DIR)/tests.cpp \
			$(SRCS_DIR)/Account.cpp \

OBJS      = $(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

all: $(OBJS_DIR) $(NAME)

compare_logs: $(NAME)
	@./$(NAME) > logs/my_logs.log
	@./compare_logs.sh logs/19920104_091532.log logs/my_logs.log

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	/bin/rm -rf $(OBJS_DIR)
	/bin/rm -f logs/my_logs.log

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re