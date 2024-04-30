# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/12 12:22:59 by dvan-kle      #+#    #+#                  #
#    Updated: 2024/04/30 13:04:27 by dvan-kle      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME        := PhoneBook
SOURCES     := main.cpp Phonebook.cpp Contact.cpp
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