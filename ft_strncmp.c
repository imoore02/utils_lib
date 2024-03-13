#include "libft.h"

/*
** ft_strncmp
** --------------------
** Description:
**   Compares the first differing characters between two strings 's1' and 's2'.
**
** Parameters:
**   - s1: The first string to be compared.
**   - s2: The second string to be compared.
**
** Returns:
**   - An integer less than, equal to, or greater than zero if the first differing character in 's1' is
**     less than, equal to, or greater than the corresponding character in 's2', respectively.
**
** Note:
**   - The function compares characters in 's1' and 's2' until a difference is found or the null terminator is reached.
**   - Returns the difference between the first differing characters, cast to unsigned char to handle signedness properly.
*/

int	ft_strncmp(const char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
