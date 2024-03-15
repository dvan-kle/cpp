# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/12 11:02:40 by dvan-kle      #+#    #+#                  #
#    Updated: 2024/03/15 15:57:03 by dvan-kle      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME        := megaphone
SOURCES     := megaphone.cpp
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