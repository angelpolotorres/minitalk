# Colors ----------------------------------------------------- #
# ------------------------------------------------------------ #
GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
MAGENTA = \033[0;35m
BLUE = \033[0;34m
CIAN = \033[0;36m
WHITE = \033[0;37m
END = \033[0m

# Final program ---------------------------------------------- #
# ------------------------------------------------------------ #
NAME = libgnl.a
PROJECT = gnl
# Source files ----------------------------------------------- #
# ------------------------------------------------------------ #
SRCS = $(SRC_FILES)

SRC_DIR = .
SRC_FILES = $(addprefix $(SRC_DIR)/, $(SRC_CFILES))
SRC_CFILES = \
		gnl.c \
		gnl_utils.c \

# Object files ----------------------------------------------- #
# ------------------------------------------------------------ #
OBJ_DIR = ./../../build
OBJ_GNL_DIR = $(OBJ_DIR)/gnl
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_GNL_DIR)/%.o, $(SRCS))

# Header files ----------------------------------------------- #
# ------------------------------------------------------------ #
INCL_DIR = ../../includes
INCL_FILES = $(INCL_DIR)/gnl.h

# Compiler options ------------------------------------------- #
# ------------------------------------------------------------ #
CC = gcc -g
CFLAGS = -Wall -Wextra -Werror
GENERATE_LIB = ar rcs
# Compiler to generate de final file (.a)
# ar - Utility for create an maintain library files
# r - Replace de old library by the new one created with your new files.
# c - Create a new library if it did not exist.
# s - Sort the library index for access faster to the functions.
#	- If u use 's' is not necessary use ranlib

# Rules ------------------------------------------------------ #
# ------------------------------------------------------------ #
all: $(NAME)

$(NAME): $(OBJS) $(INCL_FILES)
	@$(GENERATE_LIB) $(NAME) $(OBJS)
	@echo "$(GREEN)[+] 🧱 $(PROJECT) compiled$(END)"

$(OBJ_GNL_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR) $(OBJ_GNL_DIR)
	@$(CC) $(CFLAGS) -I./$(INCL_DIR) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_GNL_DIR):
	@mkdir -p $(OBJ_GNL_DIR)

clean:
	@rm -fr $(OBJ_GNL_DIR)

fclean : clean
	@rm -f $(NAME)
	@echo "$(GREEN)[-]$(END) 🗑  $(PROJECT) deleted"


re: fclean all

.PHONY: all clean fclean re