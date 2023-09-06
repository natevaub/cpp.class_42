# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 18:02:32 by nvaubien          #+#    #+#              #
#    Updated: 2023/09/06 18:40:52 by nvaubien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98
NAME    = megaphone
OBJS_DIR = objs
SRCS_DIR = srcs
SRCS     = $(SRCS_DIR)/megaphone.cpp
OBJS     = $(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

all: $(OBJS_DIR) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	/bin/rm -rf $(OBJS_DIR)
	@echo "🧹 Cleaned object files!"

fclean: clean
	/bin/rm -f $(NAME)
	@echo "🧹 Cleaned executable file!"

re: fclean all
	@echo "🧹 Cleaned + 🚀 Build!"

.PHONY: all clean fclean re