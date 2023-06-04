# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/03 04:25:46 by eelhafia          #+#    #+#              #
#    Updated: 2023/06/03 19:11:03 by eelhafia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon
FLG = -std=c++98
CPP = c++
RM = rm -f
SRC = main.cpp Weapon.cpp HumanB.cpp HumanA.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLG) $(OBJ) -o $@

%.o:  %.cpp  Weapon.hpp
	$(CPP) $(FLG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
