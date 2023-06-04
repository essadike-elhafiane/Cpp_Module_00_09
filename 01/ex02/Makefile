NAME = brain
FLG = -std=c++98
CPP = c++
RM = rm -f
SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLG) $(OBJ) -o $@

%.o:  %.cpp 
	$(CPP) $(FLG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
