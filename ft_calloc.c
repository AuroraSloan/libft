#include "libft.h"
#include "stdint.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;

	if (count > SIZE_MAX / size)
		return (NULL);

	len = size * count;
	ptr = malloc(len);
	if (ptr)
		ft_bzero(ptr, len);
	return (ptr);
}
