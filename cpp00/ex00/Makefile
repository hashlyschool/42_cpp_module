NAME		=	megaphone
SRCS_DIR	=	./
SRCS		=	megaphone.cpp
FLAGS		=	-Wall -Wextra -Werror
OBJS_DIR	=	objs/
OBJ			=	$(SRCS:.cpp=.o)
OBJS		=	$(addprefix $(OBJS_DIR), $(OBJ))
CC			=	clang++ -std=c++98

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling:\t$<"
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "Cleaning:\t$(OBJS_DIR)"
	@rm -rf $(OBJS_DIR)

fclean: clean
	@echo "Cleaning:\t$(NAME)"
	@rm -f $(NAME)

re: fclean all
