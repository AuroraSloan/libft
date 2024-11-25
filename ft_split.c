#include "libft.h"
#include "stdio.h"

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
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int	i;
	int	j;
	int	wc;
	int	wl;

	if (!s)
		return (NULL);
	wc = word_count(s, c);
	dst = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (j < wc)
	{
		while (s[i] == c)
			i++;
		wl = word_len(&s[i], c);
		dst[j] = ft_strldup(&s[i], wl);
		if (!(dst[j]))
			return (free_err(dst, j));
		i = i + wl;
		j++;
	}
	dst[j] = NULL;
	return (dst);
}
