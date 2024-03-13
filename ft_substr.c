#include "libft.h"

/*
** ft_substr
** --------------------
** Description:
**   Creates a new substring from the string 's', starting at the specified index 'start' and with a length of 'len'.
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
**   - The function allocates memory for the substring and copies the specified portion from 's'.
**   - The resulting substring is null-terminated.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
