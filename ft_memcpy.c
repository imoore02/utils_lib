#include "libft.h"

/*
** void *ft_memcpy(void *dest, const void *src, size_t n)
** Copy a block of memory from source to destination.
** @dest: Pointer to the destination memory block.
** @src: Pointer to the source memory block.
** @n: Number of bytes to copy from source to destination.
**
** This function copies @n bytes from the source memory block pointed to by @src
** to the destination memory block pointed to by @dest. It returns a pointer to
** the destination memory block.
**
** Returns:
** A pointer to the destination memory block.
**
** When to use:
** - Use ft_memcpy when you need to copy a specified number of bytes from one
**   memory block to another.
** - It is useful for tasks such as copying data between buffers, structures, or
**   arrays in memory.
** - The function provides a simple and efficient way to perform memory copying.
** - Be cautious to ensure that the destination memory block has enough space to
**   accommodate the copied data to avoid overwriting adjacent memory.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;	
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
