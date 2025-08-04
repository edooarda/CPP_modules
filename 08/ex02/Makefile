NAME = NinjaStack

CPPFLAGS = -Wall -Werror -Wextra -MMD -std=c++11

WHITE_B = \033[1;37m
PINK = \033[35m
B_GREEN = \033[0;102m
CYAN = \033[36m
BOLD = \033[1m
RESET = \033[0m


SRC = main.cpp \


OBJ = $(SRC:.cpp=.o)
DEPS = $(OBJ:.o=.d)


all: $(NAME)

$(NAME): $(OBJ)
	@c++ $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(PINK)$(BOLD)\n	Ready?! Here we go! 🚀$(RESET)\n"

clean:
	@rm -rf $(OBJ) $(DEPS)
	@echo "✅"

fclean: clean
	@rm -f $(NAME)
	@echo "$(B_GREEN)$(WHITE_B) ALL Cleansed! $(RESET)"

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re