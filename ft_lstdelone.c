/*Takes as a parameter an element and frees the memeory of the element's content 
using the function 'del' given as a parameter and free the element.*/
//パラメータの'del'関数で入った要素の内容を消してフリーにして、要素をフリーします。

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	lst->content = NULL;
	lst->next = NULL;
	free(lst);
}
