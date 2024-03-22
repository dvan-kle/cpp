# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/03/07 15:21:00 by dvan-kle      #+#    #+#                  #
#    Updated: 2024/03/22 14:19:29 by dvan-kle      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME        := ClapTrap
SOURCES     := main.cpp ClapTrap.cpp ScavTrap.cpp
OBJECTS     := $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	c++ -o $(NAME) $(OBJECTS)

%.o: %.cpp
	c++ -Wall -Werror -Wextra -std=c++98 -c $(SOURCES)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all