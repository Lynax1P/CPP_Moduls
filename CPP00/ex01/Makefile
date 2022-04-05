NAME	= PhoneBook

SRC		= Contact.cpp PhoneBook.cpp main.cpp
HEADER	= Contact.hpp PhoneBook.hpp 

CC		= @clang++
FLAGS 	= -Wall -Wextra -Werror -std=c++98

OBJ_DIR	= ./obj/
OBJ		= $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

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

.PHONY : all clean fclean re
