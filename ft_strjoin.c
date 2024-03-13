#include "libft.h"

/*
** ft_strjoin
** --------------------
** Description:
**   Concatenates two strings 's1' and 's2' into a new string, allocating memory for the result.
**
** Parameters:
**   - s1: The first string.
**   - s2: The second string.
**
** Returns:
**   - A pointer to the newly allocated concatenated string.
**   - Returns NULL if memory allocation fails.
**
** Note:
**   - The function calculates the total length of the concatenated string using 'ft_strlen'.
**   - Allocates memory for the new string and copies the content of 's1' and 's2' into it.
**   - The concatenated string is null-terminated.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
