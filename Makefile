# Makefile settings
MAKEFLAGS += -s

# Project settings
NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

# Paths
LIBFT_DIR = libft/

# Source files
SRC = push_swap.c push_swap_utils.c
OBJ = $(SRC:.c=.o)

# Libraries
LIBFT_A = $(LIBFT_DIR)libft.a

# Default target
all: $(MLX_PATH) $(NAME)
	@clear
	@echo "╔══════════════════════════╗"
	@echo "║ ✅ Compiled Successfully!║"
	@echo "╚══════════════════════════╝"

# Linking the final executable
$(NAME): $(LIBFT_A) $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIBFT_A)

# Building the libft library
$(LIBFT_A):
	@$(MAKE) -C $(LIBFT_DIR)

# Compiling object files
%.o: %.c
	$(CC) $(FLAGS) -c $< $(MLX_INCLUDE)

# Cleaning object files
clean:
	$(RM) $(OBJ)
	@$(MAKE) clean -C $(LIBFT_DIR)

# Full cleanup
fclean: clean
	$(RM) $(NAME)
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@clear
	@echo "╔══════════════════════════╗"
	@echo "║ ✅ Cleaned Successfully! ║"
	@echo "╚══════════════════════════╝"

# Rebuild everything
re: fclean all

# Leak testing
leak: re
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)
