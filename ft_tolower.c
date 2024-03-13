#include "libft.h"

/*
** ft_tolower
** --------------------
** Description:
**   Converts an uppercase letter to its corresponding lowercase letter.
**
** Parameters:
**   - i: The character to be converted.
**
** Returns:
**   - The lowercase equivalent of the input character if it is an uppercase letter.
**   - Returns the input character unchanged if it is not an uppercase letter.
**
** Note:
**   - The function checks if the input character is an uppercase letter (ASCII range 'A' to 'Z')
**     and returns the corresponding lowercase letter by adding 32 to its ASCII value.
**   - Returns the input character unchanged if it is not an uppercase letter.
*/

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}
