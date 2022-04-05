NAME	= HumanParty

SRC		= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp 
HEADER	= HumanA.hpp HumanB.hpp  Weapon.hpp

FLAGS	= -Wall -Wextra -Werror -std=c++98
CC		=

OBJ_DIR	= ./obj/
OBJ		= $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

.PHONY : all clean fclean re

all: $(NAME)

$(NAME): obj $(OBJ)
	@clang++ $(FLAGS) $(OBJ) -o $(NAME)

obj		:
		@mkdir -p obj/

obj/%.o:%.cpp $(HEADER)
	@clang++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
