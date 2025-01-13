NAME = megaphone

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re
