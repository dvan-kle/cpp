# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/12 16:08:35 by dvan-kle      #+#    #+#                  #
#    Updated: 2024/01/17 16:47:20 by dvan-kle      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME        := Harl
SOURCES     := main.cpp Harl.cpp

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