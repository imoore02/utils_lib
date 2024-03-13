#include "libft.h"

/*
** static unsigned int ft_numsize(int n)
** Calculate the number of digits in an integer.
** @n: The input integer to be analyzed.
**
** This static function determines the number of digits in the given integer @n.
** It is used internally by ft_itoa to determine the size of the character array
** needed to represent the integer as a string.
** Returns:
** The number of digits in the integer @n.
**
*/

static unsigned int	ft_numsize(int n)
{
	unsigned int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len += 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/*
** char *ft_itoa(int n)
** Convert an integer to a null-terminated string.
** @n: The integer to be converted.
**
** This function takes an integer @n and converts it into a dynamically allocated
** null-terminated string. It handles positive and negative integers, calculating
** the required size of the string using ft_numsize. The resulting string is
** stored in memory allocated by malloc.
**
** Returns:
** A pointer to the newly allocated string representing the integer @n.
** NULL is returned in case of memory allocation failure.
**
** When to use:
** - Use ft_itoa when you need to convert an integer to a string representation.
** - It is particularly useful for tasks like formatting integers for display or
**   when working with functions that require string representations of numbers.
** - Be mindful of memory management, as the caller is responsible for freeing
**   the allocated memory using free() when the string is no longer needed.
** - If memory allocation is a concern, consider using snprintf or related functions
**   to convert integers without dynamic memory allocation.
*/

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	unsigned int	len;

	len = ft_numsize(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}
