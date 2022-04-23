NAME			=	MyPhoneBook
CC				=	clang++ -std=c++98
RM				=	rm -rf
FLAGS			=	-Wall -Wextra -Werror
INC_PATH		=	./inc/
INC_NAME		=	Contact.hpp PhoneBook.hpp
INC				=	$(addprefix $(INC_PATH), $(INC_NAME))
SRCS_PATH		=	./src/
OBJS_PATH		=	./objs/
SRCS_NAME		=	Contact.cpp PhoneBook.cpp MyPhoneBook.cpp
SRCS			=	$(addprefix $(SRCS_PATH), $(SRCS_NAME))
OBJS			=	$(addprefix $(OBJS_PATH), $(SRCS_NAME:.cpp=.o))

OPTFLAGS		=	-g

all: ${NAME}

bonus:${NAME}

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
