//Iterates the list 'lst' and applies the function 'f' to the content of each element.
//'lst'リストの内容一つ一つ'f'関数にします。

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
