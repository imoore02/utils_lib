#include "libft.h"

/*
** ft_isascii - Check if a character is a valid ASCII character.
** @b: The character to be checked.
**
** This function determines whether the input character @b is a valid ASCII character.
** ASCII characters have integer values in the range [0, 127].
**
** Returns:
** 1 if @b is a valid ASCII character.
** 0 otherwise.
**
** When to use:
** - Use ft_isascii when you need to check whether a character is within the valid
**   ASCII character range (0 to 127).
** - It is useful for validating and filtering input characters in scenarios where
**   only ASCII characters are expected or required.
** - The function provides a simple and efficient way to perform ASCII character checks.
*/


int	ft_isascii(int b)
{
	if (b >= 0 && b <= 127)
		return (1);
	return (0);
}
