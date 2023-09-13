Name = Base
CC = c++ -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRC = main.cpp Base.cpp


obj = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(obj)
	$(CC) $(obj) -o $@

%.o: %.cpp include/Base.hpp include/A.hpp include/B.hpp include/C.hpp
	$(CC) -c $< -o $@

clean: 
	$(RM) $(obj)

fclean: clean
	$(RM) $(Name)

re: fclean all
