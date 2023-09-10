NAME = Bureaucrat
CC = c++
flg = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRC = Bureaucrat.cpp main.cpp AForm.cpp PresidentialPardonForm.cpp \
	RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

obj = $(SRC:.cpp=.o)

all: $(NAME)


$(NAME): $(obj)
	$(CC) $(flg) $(obj) -o $@

%.o : %.cpp Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
	$(CC) $(flg) -c $< -o $@

clean:
	$(RM) $(obj)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
