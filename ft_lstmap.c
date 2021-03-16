//Iterates the list 'lst' and applies the function 'f' to the content of each element
//'lst'リストの内容一つ一つ'f'関数にします。
//Creates a new list resulting of the successive applications of the function 'f'.
//'f'関数にした要素から新しいリストを作ります。
//The 'del' function is used to delete the content of an element if needed.
//いれば、'del'関数で要素の内容を消します。

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list *new_list;
	t_list *new_head;

	if (!lst || !*f)
		return (NULL);
	new_head = NULL;
	while (lst)
	{
		new_list = ft_lstnew(f(lst->content));
		if (!new_list)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_list);
		lst = lst->next;
	}
	return (new_head);
}
