#include "libft.h"

/*
** ft_strchr
** --------------------
** Description:
**   Locates the first occurrence of character 'i' in the string 's'.
**   Returns a pointer to the located character or a null pointer if the character is not found.
**
** Parameters:
**   - s: The string to search within.
**   - i: The character to search for.
**
** Returns:
**   - A pointer to the first occurrence of character 'i' in the string 's'.
**   - Returns a null pointer if the character 'i' is not found.
**
** Note:
**   - If 'i' is the null terminator ('\0'), the function returns a pointer to the null terminator at the end of the string.
**   - If 'i' is not found in the string, the function returns a null pointer.
*/

char	*ft_strchr(const char *s, int i)
{
	while (*s)
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	if (i == '\0')
		return ((char *)s);
	return (0);
}
