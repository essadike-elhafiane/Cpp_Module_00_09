NAME = PhoneBook
FLG = -Wall -Wextra -Werror -std=c++98
CPP = c++
RM = rm -f
SRC = PhoneBook.cpp main.cpp Contact.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLG) $(OBJ) -o $@

%.o:  %.cpp PhoneBook.hpp
	$(CPP) $(FLG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean fclean all re