NAME = Interface
CC = c++
FLG = -Wall -Wextra -Werror -g -std=c++98
RM = rm -f 

SRC = main.cpp file.cpp AMateria.cpp characters.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cpp file.hpp characters.hpp amataria.hpp
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all