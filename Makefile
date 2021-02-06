NAME = libft.a
SRCS = ft_strlcpy.c ft_strlen.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c \
	ft_isalpha.c ft_atoi.c ft_strncmp.c ft_strnstr.c ft_strlcat.c \
	ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isdigit.c \
	ft_strjoin.c ft_substr.c ft_calloc.c ft_strdup.c ft_tolower.c \
	ft_memcpy.c ft_bzero.c ft_memset.c ft_strtrim.c ft_putchar_fd.c \
	ft_strchr.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_memccpy.c \
	ft_itoa.c ft_split.c ft_strmapi.c ft_strrchr.c
B_SRCS = ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c \
	ft_lstmap.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstnew.c
OBJS = $(SRCS:.c=.o)
B_OBJS = $(B_SRCS:.c=.o)
CC = gcc 
CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

bonus: $(B_OBJS) $(NAME)
	ar rc $(NAME) $(B_OBJS)

clean:
	rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all 

.PHONY: all clean fclean re bonus
