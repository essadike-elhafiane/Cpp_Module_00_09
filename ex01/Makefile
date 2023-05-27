NAME = megaphone
FLG = -Wall -Wextra -Werror -std=c++98
CPP = c++
RM = rm -f
SRC = megaphone.cpp


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

.PHONY: clean fclean all re