NAME = ex03
SRC = Bureaucrat.cpp main.cpp AForm.cpp \
		ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp Intern.cpp
VPATH = src
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
OBJ_DIR = obj
FLAGS = -Wall -Wextra -Werror -g -fsanitize=address -std=c++11
CC = c++

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "$(NAME) compiled\n"

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CC) $(FLAGS) -o $@ -c $<

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR) target2_shrubbery

fclean:
	@rm -rf $(OBJ_DIR) $(NAME) target2_shrubbery

re: fclean all

PHONY: all clean fclean re