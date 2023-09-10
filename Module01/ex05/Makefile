NAME = Harl
FLG = -std=c++98
CPP = c++
RM = rm -f
SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLG) $(OBJ) -o $@

%.o:  %.cpp Harl.hpp
	$(CPP) $(FLG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all