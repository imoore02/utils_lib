#include "libft.h"

/*
** ft_bzero - Set a block of memory to zero.
** @s: Pointer to the memory block.
** @n: Number of bytes to set to zero.
**
** This function sets the first @n bytes of the memory block pointed to by @s
** to zero. It essentially performs the same operation as ft_memset with a
** constant byte value of zero.
**
** When to use:
** - Use ft_bzero when you need to clear a block of memory, such as initializing
**   a buffer or resetting a data structure.
** - It is particularly useful when you want to ensure that sensitive information
**   stored in memory is erased before releasing or reusing the memory.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
