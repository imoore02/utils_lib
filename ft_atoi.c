#include "libft.h"

/*
** ft_atoi - Convert a string to an integer.
** @str: The input string to be converted.
**
** This function takes a string as input and converts it to an integer.
** It skips leading whitespaces, handles sign ('-' or '+'), and then
** converts the numeric part to an integer. The function supports both
** positive and negative integers.
**
** Returns:
** The converted integer value from the input string.
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);
}