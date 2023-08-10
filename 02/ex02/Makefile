NAME = fixed
FLG = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLG) $(OBJ) -o $@ 

%.o: %.cpp Fixed.hpp
	$(CC) $(FLG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
