#include "libft.h"

/*
** ft_strlcat
** --------------------
** Description:
**   Concatenates the string 'src' onto the end of the string 'dst', ensuring that the total length
**   does not exceed the specified buffer size 'size'.
**
** Parameters:
**   - dst: The destination string.
**   - src: The source string to be appended.
**   - size: The size of the destination buffer.
**
** Returns:
**   - The total length of the concatenated string (initial length of 'dst' + length of 'src').
**
** Note:
**   - The function appends the characters from 'src' to 'dst' until the total length reaches 'size - 1'
**     or the end of 'src' is reached.
**   - The resulting string in 'dst' is null-terminated.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
