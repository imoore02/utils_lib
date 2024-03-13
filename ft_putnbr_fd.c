#include "libft.h"

/*
** ft_putnbr_fd
** --------------------
** Description:
**   Writes the integer 'n' to the specified file descriptor 'fd'.
**
** Parameters:
**   - n: Integer to be written.
**   - fd: File descriptor where the integer will be written.
**
** Returns:
**   - None.
**
** Note:
**   - This function recursively breaks down the integer 'n' and writes each digit to the file descriptor 'fd'.
**   - Handles special case for the minimum possible integer value (-2147483648).
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
