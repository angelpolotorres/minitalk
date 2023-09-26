# Colors ----------------------------------------------------- #
# ------------------------------------------------------------ #
GREEN = \033[0;32m
END = \033[0m

# Final program ---------------------------------------------- #
# ------------------------------------------------------------ #
NAME_CLI = client
NAME_SER = server
PROJECT = minitalk

# Source files ----------------------------------------------- #
# ------------------------------------------------------------ #
SRCS = $(SRC_FILES)

SRC_DIR = src
SRC_FILES = $(addprefix $(SRC_DIR)/, $(SRC_CFILES))
SRC_CFILES = \
		client.c \
		error.c \

LIBFT_DIR =$(SRC_DIR)/libft
PRINTF_DIR =$(SRC_DIR)/printf
GNL_DIR =$(SRC_DIR)/gnl

# Object files ----------------------------------------------- #
# ------------------------------------------------------------ #
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))
OBJ_DIR = build

# Compiler options ------------------------------------------- #
# ------------------------------------------------------------ #
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
LINKFLAGS = -L./$(LIBFT_DIR) -lft -L./$(PRINTF_DIR) -lprintf -L./$(GNL_DIR) -lgnl
INCL_DIR = includes

# Rules ------------------------------------------------------ #
# ------------------------------------------------------------ #
all: $(NAME_CLI) $(NAME_SER)

$(NAME_CLI): $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR)
	@$(MAKE) -C $(PRINTF_DIR)
	@$(MAKE) -C $(GNL_DIR)
	@$(CC) $(CFLAGS) $(LINKFLAGS) -o $(NAME_CLI) $(OBJS)

$(NAME_SER): $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR)
	@$(MAKE) -C $(PRINTF_DIR)
	@$(MAKE) -C $(GNL_DIR)
	@$(CC) $(CFLAGS) $(LINKFLAGS) -o $(NAME_SER) $(OBJS)
	@echo "$(GREEN)[+] 🧱 $(PROJECT) compiled$(END)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I./$(INCL_DIR) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(GREEN)[-]$(END) 🗑 .o files deleted"

fclean: clean
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(MAKE) fclean -C $(PRINTF_DIR)
	@$(MAKE) fclean -C $(GNL_DIR)
	@rm -f $(NAME)
	@echo "$(GREEN)[-]$(END) 🗑  $(PROJECT) deleted"

re: fclean all

.PHONY: all clean fclean re