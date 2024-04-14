# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source directories
LIBC_DIR = libc
ADDITIONAL_DIR = additional
BONUS_DIR = bonus

# Object directory
OBJ_DIR = objs

# Source files
LIBC_SRCS = $(wildcard $(LIBC_DIR)/*.c)
ADDITIONAL_SRCS = $(wildcard $(ADDITIONAL_DIR)/*.c)
BONUS_SRCS = $(wildcard $(BONUS_DIR)/*.c)

# Object files
LIBC_OBJS = $(patsubst $(LIBC_DIR)/%.c,$(OBJ_DIR)/%.o,$(LIBC_SRCS))
ADDITIONAL_OBJS = $(patsubst $(ADDITIONAL_DIR)/%.c,$(OBJ_DIR)/%.o,$(ADDITIONAL_SRCS))
BONUS_OBJS = $(patsubst $(BONUS_DIR)/%.c,$(OBJ_DIR)/%.o,$(BONUS_SRCS))

# Library name
NAME = libft.a
SONAME = libft.so

# Bonus target
bonus: $(LIBC_OBJS) $(ADDITIONAL_OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(LIBC_OBJS) $(ADDITIONAL_OBJS) $(BONUS_OBJS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(LIBC_OBJS) $(ADDITIONAL_OBJS) $(BONUS_OBJS)
	gcc -nostartfiles -shared -o libft.so $(LIBC_OBJS) $(ADDITIONAL_OBJS) $(BONUS_OBJS)

# Default target
all: $(NAME)

# Create the object directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Compile libc source files
$(OBJ_DIR)/%.o: $(LIBC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Compile additional source files
$(OBJ_DIR)/%.o: $(ADDITIONAL_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Compile bonus source files
$(OBJ_DIR)/%.o: $(BONUS_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create the library
$(NAME): $(LIBC_OBJS) $(ADDITIONAL_OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(LIBC_OBJS) $(ADDITIONAL_OBJS) $(BONUS_OBJS)


# Clean object files
clean:
	rm -rf $(OBJ_DIR)

# Clean object files and library
fclean: clean
	rm -f $(NAME)

# Re-compile everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re