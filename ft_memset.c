#include "libft.h"

/*
** ft_memset
** --------------------
** Description:
**   Sets 'len' bytes of memory starting at the location pointed to by 'b' to the specified value 'c'.
**   This function is similar to memset but ensures the correct order of filling memory.
**
** Parameters:
**   - b: Memory pointer to start filling.
**   - c: Value to set in each byte of the memory area.
**   - len: Number of bytes to set.
**
** Returns:
**   - Pointer to the memory area 'b'.
**
** Note:
**   - The function fills the memory area starting from the end to the beginning, ensuring proper order.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}
