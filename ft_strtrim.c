#include "libft.h"

/*
** ft_strtrim
** --------------------
** Description:
**   Creates a new string by removing leading and trailing characters from the string 's1' that match any character
**   in the set 'set'. Allocates memory for the new string.
**
** Parameters:
**   - s1: The string to trim.
**   - set: The set of characters to be removed from the beginning and end of 's1'.
**
** Returns:
**   - A pointer to the newly allocated trimmed string.
**   - Returns NULL if memory allocation fails.
**
** Note:
**   - The function determines the range of non-matching characters in 's1' by skipping leading characters that match 'set'
**     and trimming trailing characters that match 'set'.
**   - Allocates memory for the new string and copies the non-matching characters into it.
**   - The resulting string is null-terminated.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}
