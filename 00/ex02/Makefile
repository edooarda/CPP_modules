# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: edooarda <edooarda@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/12/23 09:43:18 by edooarda      #+#    #+#                  #
#    Updated: 2025/01/20 16:21:03 by edribeir      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = account

CPPFLAGS = -Wall -Werror -Wextra -std=c++11

WHITE_B = \033[1;37m
PINK = \033[35m
B_GREEN = \033[0;102m
CYAN = \033[36m
BOLD = \033[1m
RESET = \033[0m

SRC = Account.cpp \
		tests.cpp \

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