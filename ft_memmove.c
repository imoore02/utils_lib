#include "libft.h"

/*
** ft_memmove
** --------------------
** Copies 'n' bytes of memory from source 's2' to destination 's1', handling overlapping memory regions.
** This function is similar to memcpy but ensures correct behavior even if the source and destination memory areas overlap.
** It checks the relative positions of 's1' and 's2' and uses a loop to copy the data accordingly.
** * Parameters:
**   - s1: Destination memory pointer.
**   - s2: Source memory pointer.
**   - n: Number of bytes to copy.
**
** Returns:
**   - Pointer to the destination memory area 's1'.
**
** Note:
**   - The function works correctly even if the source and destination memory areas overlap.*
**   - The memory is copied in the correct direction, depending on the relative positions of 's1' and 's2'.
*/

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (s2 < s1)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
			len++;
		}
	}
	return (s1);
}
