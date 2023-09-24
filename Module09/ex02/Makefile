Name = PmergeMe
CC = c++ -Wall -Wextra -Werror -g -std=c++98
RM = rm -f

SRC = main.cpp PmergeMe.cpp

obj = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(obj)
	$(CC) $(obj) -o $@

%.o: %.cpp PmergeMe.hpp
	$(CC) -c $< -o $@

clean: 
	$(RM) $(obj)

fclean: clean
	$(RM) $(Name)

re: fclean all
