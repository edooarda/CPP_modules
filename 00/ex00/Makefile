# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: edribeir <edribeir@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/11/27 16:03:22 by edribeir      #+#    #+#                  #
#    Updated: 2024/11/27 16:56:43 by edribeir      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

WHITE_B = \033[1;37m
PINK = \033[35m
B_GREEN = \033[0;102m
CYAN = \033[36m
BOLD = \033[1m
RESET = \033[0m

SRC = megaphone.cpp

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