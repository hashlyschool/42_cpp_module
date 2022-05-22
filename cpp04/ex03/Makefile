NAME			=	Abstract
CC				=	c++ -std=c++98
RM				=	rm -rf
FLAGS			=	-Wall -Wextra -Werror
INC_PATH		=	./
INC_NAME		=	Animal.hpp Cat.hpp Dog.hpp Brain.hpp
INC				=	$(addprefix $(INC_PATH), $(INC_NAME))
SRCS_PATH		=	./
OBJS_PATH		=	./objs/
SRCS_NAME		=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
SRCS			=	$(addprefix $(SRCS_PATH), $(SRCS_NAME))
OBJS			=	$(addprefix $(OBJS_PATH), $(SRCS_NAME:.cpp=.o))

OPTFLAGS		=	-Wshadow -Wno-shadow -g

all: ${NAME}

$(NAME): $(OBJS_PATH) $(OBJS)
	@$(CC) $(FLAGS) $(OPTFLAGS) $(OBJS) -o $(NAME)
	@echo "built $(NAME) finish"

$(OBJS_PATH)%.o: $(SRCS_PATH)%.cpp $(INC)
	@echo "Compiling: $<"
	@$(CC) $(FLAGS) $(OPTFLAGS) -I $(INC_PATH) -c $< -o $@

$(OBJS_PATH):
	@mkdir -p $(OBJS_PATH)

clean:
	@echo "Cleaning: $(OBJS_PATH)"
	@$(RM) $(OBJS_PATH)

fclean:		clean
	@echo "Cleaning: $(NAME)"
	@$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
