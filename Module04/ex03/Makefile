NAME      = a.out
CC        = c++
FLAGS     = -Wall -Wextra -Werror -std=c++98

OBJS_DIR  = objs
SRCS_DIR  = srcs

SRCS      = $(SRCS_DIR)/main.cpp			\
			$(SRCS_DIR)/Ice.cpp\
			$(SRCS_DIR)/Cure.cpp\
			$(SRCS_DIR)/AMateria.cpp\
			$(SRCS_DIR)/MateriaSource.cpp\
			$(SRCS_DIR)/Character.cpp\


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

.PHONY: all clean fclean re