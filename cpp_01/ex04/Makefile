# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/17 16:46:14 by dvan-kle      #+#    #+#                  #
#    Updated: 2024/01/17 16:46:49 by dvan-kle      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME        := Sed
SOURCES     := main.cpp
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