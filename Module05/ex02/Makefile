# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 20:26:37 by nvaubien          #+#    #+#              #
#    Updated: 2024/01/07 12:28:23 by nvaubien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME      = bureaucrat
CC        = c++
FLAGS     = -Wall -Wextra -Werror -std=c++98

OBJS_DIR  = objs
SRCS_DIR  = srcs

SRCS      = $(SRCS_DIR)/main.cpp			\
			$(SRCS_DIR)/Bureaucrat.cpp			\
			$(SRCS_DIR)/AForm.cpp			\
			$(SRCS_DIR)/ShrubberyCreationForm.cpp			\
			$(SRCS_DIR)/RobotomyRequestForm.cpp			\
			$(SRCS_DIR)/PresidentialPardonForm.cpp

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
	/bin/rm -f *_shrubbery

re: fclean all

.PHONY: all clean fclean re⏎ 