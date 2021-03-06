//Allocates and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. 
//The array is ended by a NULL pointer.

#include "libft.h"

static char	**free_err(char **arr, int err_len)
{
	while (err_len-- > 0)
	{
		free(arr[err_len]);
		arr[err_len] = NULL;
	}
	free(arr);
	return (NULL);
}

static char	*ft_strldup(char const *s_ptr, int l)
{
	char	*dst;
	int	i;

	if (!s_ptr || !(dst = (char*)malloc(sizeof(*dst) * l + 1)))
		return (NULL);
	i = 0;
	while (i < l)
	{
		dst[i] = s_ptr[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static int	word_count(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (words == 0 && s[i] != c)
			words++;
		else if (s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int	i;
	int	len;
	int	j;

	if (!s || !(dst = (char**)malloc(sizeof(char*) * word_count(s, c) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (j < word_count(s, c))
	{
		while (s[i] == c)
			i++;
		len = word_len(&s[i], c);
		if (!(dst[j] = ft_strldup(&s[i], len)))
			return (free_err(dst, j));
		i = i + len;
		j++;
	}
	dst[j] = 0;
	return (dst);
}
