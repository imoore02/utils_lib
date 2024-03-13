#include "libft.h"

/*
** ft_countwords - Count the number of words in a string separated by a specified character.
** @str: The input string to be analyzed.
** @sep: The separator character used to identify word boundaries.
**
** This function counts the number of words in the input string @str, where words
** are defined by sequences of characters separated by the specified separator @sep.
** It skips leading separators, counts each word encountered, and ignores consecutive
** separators between words.
**
** When to use:
** - Use ft_countwords when you need to determine the number of words in a string,
**   especially when the words are separated by a specific character.
** - This function is useful for tasks such as parsing input strings or tokenizing
**   text based on a specified delimiter.
** - It provides a simple and efficient way to obtain word count information in a
**   string without modifying its content.
*/

int		ft_countwords(char *str, char sep)
{
	int result;
	int i;

	i = 0;
	result = 0;
	while (str[i] && str[i] == sep)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != sep)
			i++;
		result++;
		while (str[i] && str[i] == sep)
			i++;
	}
	return (result);
}
