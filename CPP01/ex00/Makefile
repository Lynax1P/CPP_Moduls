NAME = Zombie

SRC		= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
HEADER	= Zombie.hpp

CC		= @clang++
FLAGS 	= -Wall -Wextra -Werror -std=c++98

OBJ_DIR	= ./obj/
OBJ		= $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

.PHONY : all clean fclean re

all: $(NAME)

$(NAME): obj $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

obj		:
		@mkdir -p obj/

$(OBJ_DIR)%.o:%.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
