NAME = fixed
FLG = -std=c++98
CPP = c++
RM = rm -f
SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLG) $(OBJ) -o $@

%.o:  %.cpp Fixed.hpp
	$(CPP) $(FLG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all