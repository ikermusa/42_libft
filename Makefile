NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRC = $(filter-out %_bonus.c, $(wildcard ft_*.c))
SRC_BONUS = $(wildcard ft_*_bonus.c)

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re