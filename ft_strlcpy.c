#include "libft.h"

/*
** ft_strlcpy
** --------------------
** Description:
**   Copies up to 'size - 1' characters from the string 'src' into the destination 'dest'.
**   Ensures null-termination of the destination string and returns the length of 'src'.
**
** Parameters:
**   - dest: The destination buffer.
**   - src: The source string to be copied.
**   - size: The size of the destination buffer.
**
** Returns:
**   - The length of the source string 'src'.
**
** Note:
**   - The function copies characters from 'src' to 'dest' until 'size - 1' characters are copied,
**     or the end of 'src' is reached.
**   - The resulting string in 'dest' is null-terminated.
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
