#include "libft.h"

/*
** ft_striteri
** --------------------
** Description:
**   Applies the function 'f' to each character of the string 's' along with its index.
**   The index of each character is passed to the function as the first argument.
**
** Parameters:
**   - s: The string to iterate over.
**   - f: The function to apply to each character along with its index.
**
** Returns:
**   - None.
**
** Note:
**   - The function iterates through each character of the string 's', applying 'f' to each character and its index.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
