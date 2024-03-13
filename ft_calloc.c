#include "libft.h"

/*
** ft_calloc - Allocate and zero-initialize memory for an array.
** @count: Number of elements to allocate.
** @size: Size of each element.
**
** This function allocates a block of memory for an array of @count elements,
** each of size @size, and initializes the entire allocated memory to zero.
** It is a combination of malloc and ft_bzero operations.
**
** When to use:
** - Use ft_calloc when you need to allocate memory for an array and ensure that
**   all elements are initialized to zero.
** - It is especially useful for dynamic memory allocation scenarios where you
**   want to avoid accessing uninitialized memory.
** - When compared to malloc followed by manual zero-initialization using ft_bzero,
**   ft_calloc is more convenient and can be more efficient, as it may be optimized
**   by the underlying memory allocation system.
**
** Note: 
** - In some cases, calloc may be slightly slower than malloc if the memory
**   allocation system already initializes the memory, making the zeroing step
**   unnecessary. However, the convenience and readability of using ft_calloc
**   often outweigh this potential minor performance difference.
*/


void	*ft_calloc(size_t count, size_t size)
{
	size_t	b;
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	b = count * size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, b);
	return (p);
}
