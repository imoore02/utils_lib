#include "libft.h"

/*
** ft_isdigit - Check if a character is a digit.
** @w: The character to be checked.
**
** This function determines whether the input character @w is a digit (0-9).
**
** Returns:
** 1 if @w is a digit.
** 0 otherwise.
**
** When to use:
** - Use ft_isdigit when you need to check whether a character is a numeric digit.
** - It is useful for validating and filtering input characters in scenarios where
**   only numeric digits are expected or required.
** - The function provides a simple and efficient way to perform digit checks.
*/


int	ft_isdigit(int w)
{
	if (!(w >= '0' && w <= '9'))
		return (1);
	return (0);
}
