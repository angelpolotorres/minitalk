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
NAME = libft.a
PROJECT = libft

# Source files ----------------------------------------------- #
# ------------------------------------------------------------ #
SRCS = $(SRC_FILES)

SRC_DIR = .
SRC_FILES = $(addprefix $(SRC_DIR)/, $(SRC_CFILES)) 
SRC_CFILES = \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_strjoin.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_intlimits.c \
		ft_isspace.c \
		ft_issign.c \

# Object files ----------------------------------------------- #
# ------------------------------------------------------------ #
OBJ_DIR = ./../../build
OBJ_LIBFT_DIR = $(OBJ_DIR)/libft
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_LIBFT_DIR)/%.o, $(SRCS))

# Header files ----------------------------------------------- #
# ------------------------------------------------------------ #
INCL_DIR = ../../includes
INCL_FILES = $(INCL_DIR)/libft.h

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

$(OBJ_LIBFT_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR) $(OBJ_LIBFT_DIR)
	@$(CC) $(CFLAGS) -I./$(INCL_DIR) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_LIBFT_DIR):
	@mkdir -p $(OBJ_LIBFT_DIR)

clean:
	@rm -fr $(OBJ_LIBFT_DIR)

fclean: clean
	@rm -f $(NAME)
	@echo "$(GREEN)[-]$(END) 🗑  $(PROJECT) deleted"


re: fclean all

.PHONY: all clean fclean re
