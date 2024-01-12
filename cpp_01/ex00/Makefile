# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/12 16:08:35 by dvan-kle      #+#    #+#                  #
#    Updated: 2024/01/12 16:08:54 by dvan-kle      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME        := Brainzzz
SOURCES     := main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
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