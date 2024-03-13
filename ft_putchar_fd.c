#include "libft.h"

/*
** ft_putchar_fd
** --------------------
** Description:
**   Writes a single character 'c' to the specified file descriptor 'fd'.
**
** Parameters:
**   - c: Character to be written.
**   - fd: File descriptor where the character will be written.
**
** Returns:
**   - None.
**
** Note:
**   - This function is a simple wrapper around the 'write' system call to output a single character to the specified file descriptor.
*/


void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
