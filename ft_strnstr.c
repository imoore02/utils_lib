#include "libft.h"

/*
** ft_strstr
** --------------------
** Description:
**   Locates the first occurrence of the null-terminated substring 'n' in the null-terminated string 'h'.
**
** Parameters:
**   - h: The string to search within.
**   - n: The substring to search for.
**
** Returns:
**   - A pointer to the first occurrence of 'n' in 'h'.
**   - Returns NULL if 'n' is not found in 'h'.
**
** Note:
**   - The function iterates through each character in 'h', searching for the first character of 'n'.
**   - If the first character is found, it checks the subsequent characters to see if they match the entire 'n'.
**   - Returns a pointer to the first occurrence of 'n' in 'h' or NULL if 'n' is not found.
*/

char	*ft_strstr(const char *h, const char *n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n == NULL || n[0] == '\0')
		return ((char *)h);
	while (h[i] != '\0')
	{
		if (h[i] == n[j])
		{
			while (h[i + j] == n[j])
			{
				if (n[j + 1] == '\0')
					return ((char *)h + i);
				j++;
			}
			j = 0;
		}	
		i++;
	}
	return (NULL);
}
