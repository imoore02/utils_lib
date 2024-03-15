#include "libft.h"

/*
** ft_putstr_fd
** --------------------
** Description:
**   Writes the string 's' to the specified file descriptor 'fd'.
**
** Parameters:
**   - s: String to be written.
**   - fd: File descriptor where the string will be written.
**
** Returns:
**   - None.
**
** Note:
**   - This function uses the 'write' system call to output the characters of the string 's' to the specified file descriptor 'fd'.
**   - The length of the string is determined using 'ft_strlen'.
*/

void	ft_putstr_fd(const char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
