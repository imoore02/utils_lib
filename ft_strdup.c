#include "libft.h"

/*
** ft_strdup
** --------------------
** Description:
**   Duplicates the string 's' by allocating memory for a new string and copying the content of 's' into it.
**
** Parameters:
**   - s: The string to be duplicated.
**
** Returns:
**   - A pointer to the newly allocated duplicated string.
**   - Returns NULL if memory allocation fails.
**
** Note:
**   - The function calculates the length of the input string using 'ft_strlen'.
**   - Allocates memory for the new string and copies the content of 's' into it.
**   - The duplicated string is null-terminated.
*/

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
