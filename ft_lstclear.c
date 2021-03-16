//Deletes and frees the given element and every successor of that element.
//要素の引数とその先要素を消して、フリーします。
//The pointer to the list is set to NULL.
//リストのポインターをヌル文字にします。

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
