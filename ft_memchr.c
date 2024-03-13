#include "libft.h"

/*
** void *ft_memchr(const void *s, int c, size_t n)
** Locate the first occurrence of a byte in a block of memory.
** @s: Pointer to the memory block to be searched.
** @c: Value to be searched for (converted to an unsigned char).
** @n: Number of bytes to search in the memory block.
**
** This function searches the first @n bytes of the memory block pointed to by @s
** for the first occurrence of the byte @c (interpreted as an unsigned char).
** If the byte is found, a pointer to the byte is returned; otherwise, NULL is returned.
**
** Returns:
** A pointer to the first occurrence of @c in the memory block, or NULL if not found.
**
** When to use:
** - Use ft_memchr when you need to search for a specific byte value in a block of memory.
** - It is useful for tasks such as checking if a certain character or pattern exists
**   in a buffer or memory region.
** - The function works with raw memory and does not interpret the content, making it
**   versatile for various search scenarios.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
