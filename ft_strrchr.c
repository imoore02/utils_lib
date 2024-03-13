#include "libft.h"

/*
** ft_strrchr
** --------------------
** Description:
**   Locates the last occurrence of character 'c' in the string 's'.
**
** Parameters:
**   - s: The string to search within.
**   - c: The character to search for.
**
** Returns:
**   - A pointer to the last occurrence of character 'c' in 's'.
**   - Returns NULL if 'c' is not found in 's'.
**
** Note:
**   - The function iterates through the string 's' in reverse order, searching for the last occurrence of 'c'.
**   - Returns a pointer to the last occurrence of 'c' in 's' or NULL if 'c' is not found.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
