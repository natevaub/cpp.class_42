# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 20:26:37 by nvaubien          #+#    #+#              #
#    Updated: 2023/09/06 20:36:06 by nvaubien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	c++
FLAGS			=	-Wall -Wextra -Werror -std=c++98

OBJS_DIR		=	objs
SRCS_DIR		=	srcs

SRCS			= 	$(SRCS_DIR)/Contact.class.hpp		\
					$(SRCS_DIR)/Contact.cpp				\
					$(SRCS_DIR)/PhoneBook.class.hpp		\
					$(SRCS_DIR)/PhoneBook.cpp			\
					$(SRCS_DIR)/main.cpp				\

OBJS			=	$(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

all:				$(OBJS_DIR) $(NAME)

$(OBJS_DIR):
					mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.cpp
					$(CC) $(FLAGS) -c $< -o $@

clean:
					/bin/rm -f $(OBJS_DIR)


fclean:
					/bin/rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re