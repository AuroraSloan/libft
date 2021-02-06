#include "libft.h"

char    *ft_itoa(int n)
{
    char            *str;
    int             len;
    unsigned int    tmp;

    len = 0;
    tmp = (n < 0) ? -n : n;
    while (tmp)
    {
        tmp /= 10;
        len++;
    }
    len = n <= 0 ? len + 1 : len;
    if (!(str = (char*)malloc(sizeof(*str) * len + 1)))
        return (NULL);
    str[len--] = '\0';
    tmp = (n < 0) ? -n : n;
    while (tmp)
    {
        str[len--] = tmp % 10 + '0';
        tmp /= 10;
	}
	if (n <= 0)
		str[0] = (n == 0) ? '0' : '-';
	return (str);
}
