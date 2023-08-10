NAME = animal
CC = c++
FLG = -Wall -Wextra -Werror -std=c++98
RM = rm -f 

SRC = main.cpp Animal.cpp  Dog_cat.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cpp Poly.hpp
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all