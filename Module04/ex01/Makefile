NAME = animal
CC = c++
FLG = -Wall -Wextra -Werror -g -std=c++98
RM = rm -f 

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLG) $(OBJ) -o $@

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp Brain.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(FLG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all