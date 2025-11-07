NAME = Function_parameters
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =  main.cpp
BOLD = \033[1m
PINK = \033[0;35m
OFILES = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES)
		echo  "$(PINK)  Making EX00 ... $(PINK)"
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)

clean :
		rm -rf $(OFILES)

fclean: clean
		rm -rf $(NAME)

re: fclean all 