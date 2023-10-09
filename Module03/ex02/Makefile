NAME      = exec
CC        = c++
FLAGS     = -Wall -Wextra -Werror -std=c++98

OBJS_DIR  = objs
SRCS_DIR  = srcs

SRCS      = $(SRCS_DIR)/			\
			$(SRCS_DIR)/			\

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