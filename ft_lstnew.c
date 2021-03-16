//Allocates and returns a new element.
//新しい要素を確保して、返します。

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	if (!(new_list = malloc(sizeof(t_list))))
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
