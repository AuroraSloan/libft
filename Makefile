.PHONY: all clean fclean re

NAME := libft.a
SRCS :=  $(wildcard *.c)
HEADER := libft.h
OBJS := $(SRCS:.c=.o)
CC := gcc 
CFLAGS := -Wall -Werror -Wextra

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	ar rc $(NAME) $(OBJS)	
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all 
