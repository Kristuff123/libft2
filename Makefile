NAME = libft.a

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@echo "$(NAME) created successfully"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

clean:
	@rm -f $(OBJS)
	@echo "Object files removed"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed"

re: fclean all

.PHONY: all clean fclean re
