# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/12 11:02:40 by dvan-kle      #+#    #+#                  #
#    Updated: 2024/04/30 11:43:33 by dvan-kle      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME        := megaphone
SOURCES     := megaphone.cpp
OBJECTS     := $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	c++ -o $(NAME) $(OBJECTS)

%.o: %.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $(SOURCES)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all