# libft

The goal of this project was to start my own C library that I can use in later projects and continue to build on as I move through the 42 program.
The use of global variables and the "libtool" command was prohibited in this project.

For the stdlib functions it was prohibited to to use any external functions except for strdup and calloc in which we were allowed to use the "malloc" function.
For Other and linked list functions we were allowed to use malloc, free, and write as needed.

# Standard library functions
These functions work as described in the man page.
||||||
|------------|------------|-------------|------------|-------------|
|ft_atoi     |ft_isacii   |ft_memcmp    |ft_strdup   |ft_strnstr   | 
|ft_bzero    |ft_isdigit  |ft_memcpy    |ft_strlcat  |ft_strrchr   |
|ft_calloc   |ft_isprint  |ft_memmove   |ft_strlcpy  |ft_tolower   |
|ft_isalnum  |ft_memccpy  |ft_memset    |ft_strlen   |ft_toupper   |
|ft_isalpha  |ft_memchr   |ft_strchr    |ft_strncmp  |             |

# Other functions
Descriptions for these functions can be found in their .c files.
|        |             |             |             |             |
|-------------|-------------|-------------|-------------|-------------|
|ft_itoa      |ft_putendl_fd|ft_putstr_fd |ft_strjoin   |ft_strtrim   | 
|ft_putchar_fd|ft_putnbr_fd |ft_split     |ft_strmapi   |ft_substr    |

# Linked list functions
Descriptions for these functions can be found in their .c files.
|   |               |              |          |             |
|---------------|---------------|--------------|----------|-------------|
|ft_lstadd_back |ft_lstadd_front|ft_lstiter    |ft_lstdelone |ft_lstsize|
|ft_lstclear    |ft_lstmap      |ft_listlast   |ft_lstnew    |          |
