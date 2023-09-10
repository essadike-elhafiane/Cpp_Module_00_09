NAME = Bureaucrat
CC = c++
flg = -Wall -Wextra -Werror -std=c++98
RM = rm -r

SRC = Bureaucrat.cpp main.cpp

obj = $(SRC:.cpp=.o)

all: $(NAME)


$(NAME): $(obj)
	$(CC) $(flg) $(obj) -o $@

%.o : %.cpp Bureaucrat.hpp
	$(CC) $(flg) -c $< -o $@

clean:
	$(RM) $(obj)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
