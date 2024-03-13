#include "libft.h"

/*
** ft_strlen
** --------------------
** Description:
**   Calculates the length of the string 'r'.
**
** Parameters:
**   - r: The input string.
**
** Returns:
**   - The length of the string 'r'.
**
** Note:
**   - The function iterates through each character of the string 'r' until the null terminator is encountered,
**     counting the number of characters in the string.
*/

int	ft_strlen(const char *r)
{
	int		w;

	w = 0;
	while (r[w])
		w++;
	return (w);
}
