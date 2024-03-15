#include "libft.h"

/*
** ft_putendl_fd
** --------------------
** Description:
**   Writes the string 's' followed by a newline character to the specified file descriptor 'fd'.
**
** Parameters:
**   - s: String to be written.
**   - fd: File descriptor where the string will be written.
**
** Returns:
**   - None.
**
** Note:
**   - This function is a combination of 'ft_putstr_fd' and 'ft_putchar_fd', appending a newline character after the provided string.
*/

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}