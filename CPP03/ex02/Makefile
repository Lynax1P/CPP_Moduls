NAME	= test.exe

SRC		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
HEADER	= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

FLAGS	= -Wall -Wextra -Werror -std=c++98
CC		= @clang++

OBJ_DIR	= ./obj/
OBJ		= $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

.PHONY : all clean fclean re

all: $(NAME)

$(NAME): obj $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

obj		:
		@mkdir -p obj/

obj/%.o:%.cpp $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
