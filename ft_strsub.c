#include "libft.h"

/*
** ft_strsub
** --------------------
** Description:
**   Extracts a substring from the string 's', starting at the specified index 'start' and with a length of 'len'.
**   Allocates memory for the new substring.
**
** Parameters:
**   - s: The string from which to extract the substring.
**   - start: The starting index of the substring.
**   - len: The length of the substring.
**
** Returns:
**   - A pointer to the newly allocated substring.
**   - Returns NULL if memory allocation fails.
**
** Note:
**   - The function allocates memory for the substring using 'ft_strnew' and then copies the specified portion from 's'.
**   - The resulting substring is null-terminated.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	new = ft_strnew(len);
	if (new == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	return (new);
}
