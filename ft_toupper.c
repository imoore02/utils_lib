#include "libft.h"

/*
** ft_toupper
** --------------------
** Description:
**   Converts a lowercase letter to its corresponding uppercase letter.
**
** Parameters:
**   - i: The character to be converted.
**
** Returns:
**   - The uppercase equivalent of the input character if it is a lowercase letter.
**   - Returns the input character unchanged if it is not a lowercase letter.
**
** Note:
**   - The function checks if the input character is a lowercase letter (ASCII range 'a' to 'z')
**     and returns the corresponding uppercase letter by subtracting 32 from its ASCII value.
**   - Returns the input character unchanged if it is not a lowercase letter.
*/

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}
