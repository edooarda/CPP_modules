# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: edooarda <edooarda@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/12/26 11:16:04 by edooarda      #+#    #+#                  #
#    Updated: 2024/12/26 11:19:17 by edooarda      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

WHITE_B = \033[1;37m
PINK = \033[35m
B_GREEN = \033[0;102m
CYAN = \033[36m
BOLD = \033[1m
RESET = \033[0m

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@g++ $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(PINK)$(BOLD)\n	Ready?! Here we go! 🚀$(RESET)\n"

clean:
	@rm -rf $(OBJ)
	@echo "✅"

fclean: clean
	@rm -f $(NAME)
	@echo "$(B_GREEN)$(WHITE_B) ALL Cleansed! $(RESET)"

re: fclean all

.PHONY: all clean fclean re