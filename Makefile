MAKEFLAGS += -s
CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap

SRC_PATH = srcs/
OBJ_PATH = obj/
INC_PATH = inc/

SRC_PUSH_SWAP = push_swap/big_sort.c \
				push_swap/cost.c \
				push_swap/init.c \
				push_swap/input_check.c \
				push_swap/position.c \
				push_swap/push_swap.c \
				push_swap/stack.c \

SRC_UTILS = utils/input_utils.c \
			utils/ps_utils.c \

SRC_COMMANDS = commands/do_move.c \
			commands/push.c \
			commands/reverse_rotate.c \
			commands/rotate.c \
			commands/small_sort.c \
			commands/swap.c \

SRCS = $(addprefix $(SRC_PATH), $(SRC_PUSH_SWAP) $(SRC_UTILS) $(SRC_COMMANDS))
OBJS = $(patsubst $(SRC_PATH)%.c, $(OBJ_PATH)%.o, $(SRCS))

INCS = -I $(INC_PATH)

all: $(OBJ_PATH) $(NAME)
	@clear
	@echo "🔵 Linking objects."
	@sleep 0.5
	clear
	@echo "🔵 Linking objects.."
	@sleep 0.3
	clear
	@echo "🔵 Linking objects..."
	@sleep 0.5
	clear
	@echo " "
	@echo "✅ $(NAME) has been compiled successfully!"
	@echo " "

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INCS)
	@sleep 0.1
	@echo "🔧 Compiling... $<"

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJ_PATH)
	@clear
	@echo " "
	@echo "🗑️ All objects removed."
	@echo " "

fclean: clean
	@rm -f $(NAME)
	@clear
	@echo " "
	@echo "🗑️ All clean."
	@echo " "

re: fclean all

.PHONY: all clean fclean re
