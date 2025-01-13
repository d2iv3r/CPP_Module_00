NAME = myPhoneBook

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Contact.cpp PhoneBook.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) Contact.hpp PhoneBook.hpp
	$(CC) $(FLAGS) $(OBJ) -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re
