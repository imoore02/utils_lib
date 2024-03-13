#include "libft.h"

/*
** int ft_memcmp(const void *s1, const void *s2, size_t n)
** Compare two blocks of memory.
** @s1: Pointer to the first memory block to be compared.
** @s2: Pointer to the second memory block to be compared.
** @n: Number of bytes to compare in the memory blocks.
**
** This function compares the first @n bytes of the memory blocks pointed to by @s1
** and @s2. It returns an integer less than, equal to, or greater than zero if the
** first differing byte is less than, equal to, or greater than the corresponding byte
** in the other memory block, respectively.
**
** Returns:
** 0 if the memory blocks are equal, a negative value if s1 is less than s2,
** or a positive value if s1 is greater than s2.
**
** When to use:
** - Use ft_memcmp when you need to compare two blocks of memory byte by byte.
** - It is useful for tasks such as checking if two memory regions are identical or
**   determining their relative order based on the content.
** - The function returns a result that can be interpreted for equality or ordering.
*/


int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
