#include "libft.h"

/*
** ft_isprint - Check if a character is a printable character.
** @x: The character to be checked.
**
** This function determines whether the input character @x is a printable character,
** which includes characters with ASCII values in the range [32, 126] inclusive.
**
** Returns:
** 1 if @x is a printable character.
** 0 otherwise.
**
** When to use:
** - Use ft_isprint when you need to check whether a character is printable,
**   meaning it can be displayed or printed on the screen.
** - It is useful for filtering input characters in scenarios where only printable
**   characters are acceptable, such as when processing user input for display purposes.
** - The function provides a simple and efficient way to perform printable character checks.
*/

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}
