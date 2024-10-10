# Makefile settings
MAKEFLAGS += -s

# Project settings
NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

# Folders
SRC_DIR = src/
HEADER_DIR = header/
LIBFT_DIR = $(SRC_DIR)libft/
MOVES_DIR = $(SRC_DIR)movements/
PUSH_SWAP_DIR = $(SRC_DIR)push_swap/
UTILS_DIR = $(SRC_DIR)push_swap_utils/


# Source files
SRC = $(PUSH_SWAP_DIR)push_swap.c \
		$(UTILS_DIR)push_swap_utils.c \
		$(MOVES_DIR)moves.c \
		$(PUSH_SWAP_DIR)main.c \

OBJ = $(SRC:.c=.o)

# Libraries
LIBFT_A = $(LIBFT_DIR)libft.a

# Include paths
INCLUDES = -I $(HEADER_DIR)

# Default target
all: $(NAME)
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
	$(CC) $(FLAGS) -c $< -o $@ $(INCLUDES)

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
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) "10 11 12 13 14 15"