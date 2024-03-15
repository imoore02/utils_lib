#include "libft.h"
#include <stdlib.h>


//Creats and initialises a new list element using params (*content, content_size) -> makes it the same as last:
//(1) allocates memory to the new element;
//(2) if failed (NULL) -> returns NULL;
//(3) if the param '*content' is NULL -> make content_size = 0, and set new elem's content to NULL;
//(4) otherwise -> malloc the content pointer
//(4.1) if malloc fails -> delete memory from elem and return NULL
//(4.2) put param '*content' into new 'elem->content' (unsigned char *) -> of content_size n bytes;
//(5) sets new content_size as old content_size and next = NULL;
//(6) returns the new initalised element;
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elem;

	elem = (t_list *)ft_memalloc(sizeof(t_list));
	if (elem == NULL)
		return (NULL);
	if (content == NULL)
	{
		content_size = 0;
		elem->content = NULL;
	}
	else
	{
		elem->content = ft_memalloc(content_size);
		if (elem->content == NULL)
		{
			ft_memdel((void **)&elem);
			return (NULL);
		}
		ft_memcpy(elem->content, content, content_size);
	}
	elem->content_size = content_size;
	elem->next = NULL;
	return (elem);
}
