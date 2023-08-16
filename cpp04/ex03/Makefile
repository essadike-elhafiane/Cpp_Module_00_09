NAME = Interface
CC = c++
FLG = -Wall -Wextra -Werror -std=c++98
RM = rm -f 

SRC = main.cpp Cure.cpp AMateria.cpp  Ice.cpp Character.cpp MateriaSource.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLG) $(OBJ) -o $@

%.o: %.cpp Cure.hpp AMateria.hpp Ice.hpp Character.hpp ICharacter.hpp  MateriaSource.hpp IMateriaSource.hpp 
	$(CC) $(FLG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all