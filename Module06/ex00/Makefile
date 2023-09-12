Name = Sc
CC = c++ -Wall -Wextra -Werror -std=c++98
RM = rm -r

SRC = main.cpp ScalarConverter.cpp


obj = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(obj)
	$(CC) $(obj) -o $@

%.o: %.cpp ScalarConverter.hpp
	$(CC) -c $< -o $@

clean: 
	$(RM) $(obj)

fclean: clean
	$(RM) $(Name)

re: fclean all
