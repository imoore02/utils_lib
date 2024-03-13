#include "libft.h"

/*
** ft_strmapi
** --------------------
** Description:
**   Applies the function 'f' to each character of the string 's' along with its index.
**   Allocates memory for a new string to store the modified characters.
**
** Parameters:
**   - s: The string to apply the mapping function to.
**   - f: The mapping function that takes the index and character as arguments.
**
** Returns:
**   - A pointer to the newly allocated string containing the mapped characters.
**   - Returns NULL if memory allocation fails.
**
** Note:
**   - The function iterates through each character of the string 's', applying 'f' to each character and its index.
**   - Allocates memory for the new string and stores the modified characters.
**   - The resulting string is null-terminated.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
