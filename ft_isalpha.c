#include "libft.h"

/*
** ft_isalpha - Check if a character is an alphabetic character.
** @a: The character to be checked.
**
** This function determines whether the input character @a is an alphabetic character,
** which includes both lowercase and uppercase letters (a-z, A-Z).
**
** Returns:
** 1 if @a is an alphabetic character.
** 0 otherwise.
**
** When to use:
** - Use ft_isalpha when you need to check whether a character is an alphabet letter.
** - It is useful for validating and filtering input characters in scenarios where
**   only alphabetic characters are expected or required.
** - The function provides a simple and efficient way to perform alphabetic checks.
*/


int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	return (0);
}
