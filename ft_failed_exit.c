#include "libft.h"

void	ft_failed_exit(char *message, char *memory)
{
	if (memory)
	{
		ft_free(memory);
		memory = NULL;
	}
	ft_putendl_fd(message, 2);
	exit (EXIT_FAILURE);
}
