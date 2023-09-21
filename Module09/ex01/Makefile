Name = RPN
CC = c++ -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRC = main.cpp RPN.cpp

obj = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(obj)
	$(CC) $(obj) -o $@

%.o: %.cpp RPN.hpp
	$(CC) -c $< -o $@

clean: 
	$(RM) $(obj)

fclean: clean
	$(RM) $(Name)

re: fclean all