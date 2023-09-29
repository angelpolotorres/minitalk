# Colors ----------------------------------------------------- #
# ------------------------------------------------------------ #
GREEN = \033[0;32m
END = \033[0m

# Final program ---------------------------------------------- #
# ------------------------------------------------------------ #
NAME_CLIENT = client
NAME_SERVER = server
PROJECT = minitalk

# Source files ----------------------------------------------- #
# ------------------------------------------------------------ #
SRCS_CLIENT = $(SRC_FILES_CLIENT)
SRCS_SERVER = $(SRC_FILES_SERVER)

SRC_DIR = src
SRC_FILES_CLIENT = $(addprefix $(SRC_DIR)/, $(SRC_CFILES_CLIENT))
SRC_CFILES_CLIENT = \
			client.c \
			manage_error.c \

SRC_FILES_SERVER = $(addprefix $(SRC_DIR)/, $(SRC_CFILES_SERVER))
SRC_CFILES_SERVER = \
			server.c \

LIBFT_DIR =$(SRC_DIR)/libft
PRINTF_DIR =$(SRC_DIR)/printf

# Object files ----------------------------------------------- #
# ------------------------------------------------------------ #
OBJ_DIR = build
OBJS_CLIENT = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS_CLIENT))
OBJS_SERVER = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS_SERVER))

# Compiler options ------------------------------------------- #
# ------------------------------------------------------------ #
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
LINKFLAGS = -L./$(LIBFT_DIR) -lft -L./$(PRINTF_DIR) -lprintf
INCL_DIR = includes

# Rules ------------------------------------------------------ #
# ------------------------------------------------------------ #
all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(OBJS_CLIENT)
	@$(MAKE) -C $(LIBFT_DIR)
	@$(MAKE) -C $(PRINTF_DIR)
	@$(CC) $(CFLAGS) $(LINKFLAGS) -o $(NAME_CLIENT) $(OBJS_CLIENT)
	@echo "$(GREEN)[+] 🧱 $(PROJECT)-$(NAME_CLIENT) compiled$(END)"

$(NAME_SERVER): $(OBJS_SERVER)
	@$(CC) $(CFLAGS) $(LINKFLAGS) -o $(NAME_SERVER) $(OBJS_SERVER)
	@echo "$(GREEN)[+] 🧱 $(PROJECT)-$(NAME_SERVER) compiled$(END)"

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
	@rm -f $(NAME_CLIENT)
	@rm -f $(NAME_SERVER)
	@echo "$(GREEN)[-]$(END) 🗑  $(PROJECT) deleted"

re: fclean all

.PHONY: all clean fclean re