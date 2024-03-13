#include "libft.h"

/*
** ft_isalnum - Check if a character is an alphanumeric character.
** @x: The character to be checked.
**
** This function determines whether the input character @x is an alphanumeric
** character, which includes both alphabetic (a-z, A-Z) and numeric (0-9) characters.
**
** Returns:
** 1 if @x is an alphanumeric character.
** 0 otherwise.
**
** When to use:
** - Use ft_isalnum when you need to check whether a character is either an alphabet
**   letter or a numeric digit.
** - It is useful for validating and filtering input characters in scenarios where
**   alphanumeric characters are expected or required.
** - The function provides a simple and efficient way to perform alphanumeric checks.
*/

int	ft_isalnum(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')
		|| (x >= '0' && x <= '9'))
		return (1);
	return (0);
}
