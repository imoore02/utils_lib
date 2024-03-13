#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

/*
** Summary:
**   This code defines a simple implementation of the get_next_line function
**   that reads a text file line by line, allocating memory as needed.
**   The code includes helper functions such as chopatendofline, readtxtfile,
**   and a basic main function demonstrating the usage of get_next_line.
*/

/* -------------------------------------------------------------------------*/

/*
** chopatendofline
** --------------------
** Description:
**   Truncates the input string 'unchopped' at the first occurrence of a newline character ('\n').
**   Returns the remaining portion of 'unchopped' after the newline character, allocating memory for the result.
**   Modifies 'unchopped' by null-terminating it at the newline character.
**
** Parameters:
**   - unchopped: The input string to be truncated.
**
** Returns:
**   - A newly allocated string containing the remaining portion of 'unchopped' after the newline character.
**   - Returns NULL if 'unchopped' is NULL, empty, or if memory allocation fails.
*/

char	*chopatendofline(char	*unchopped)
{
	char	*choppedoff;
	int		counter;

	counter = 0;
	while (unchopped[counter] != '\n' && unchopped[counter] != '\0')
		counter++;
	if (unchopped[counter] == '\0' || unchopped[1] == '\0')
		return (NULL);
	choppedoff = ft_substr(unchopped, counter + 1, ft_strlen(unchopped) - 1);
	if (*choppedoff == '\0')
	{
		free (choppedoff);
		choppedoff = NULL;
	}
	unchopped[counter + 1] = '\0';
	return (choppedoff);
}

/*
** readtxtfile
** --------------------
** Description:
**   Reads data from the file descriptor 'fd' into 'bufferstring' until a newline character is encountered.
**   Appends the read data to 'staticholderstring' and reallocates memory as needed.
**   Continues reading until the end of the file or an error occurs.
**
** Parameters:
**   - fd: The file descriptor to read from.
**   - bufferstring: The buffer to store read data.
**   - staticholderstring: The string to which read data is appended.
**
** Returns:
**   - A pointer to 'staticholderstring' containing the read data.
**   - Returns NULL on read error or memory allocation failure.
*/

char	*readtxtfile(int fd, char *bufferstring, char *staticholderstring)
{
	int		counter;
	char	*holderstring;

	counter = 1;
	while (counter != 0)
	{
		counter = read(fd, bufferstring, BUFFER_SIZE);
		if (counter == -1)
			return (NULL);
		else if (counter == 0)
			break ;
		bufferstring[counter] = '\0';
		if (!staticholderstring)
			staticholderstring = ft_strdup("");
		holderstring = staticholderstring;
		staticholderstring = ft_strjoin(holderstring, bufferstring);
		free (holderstring);
		holderstring = NULL;
		if (ft_strchr(bufferstring, '\n'))
			break ;
	}
	return (staticholderstring);
}

/*
** get_next_line
** --------------------
** Description:
**   Reads lines from the file with file descriptor 'fd' using a static buffer and helper functions.
**   Manages memory allocation for the buffer and the read lines.
**   Returns each line of the file on successive calls until the end of the file is reached.
**
** Parameters:
**   - fd: The file descriptor of the text file to read.
**
** Returns:
**   - A pointer to the next line in the file.
**   - Returns NULL on read error, end of file, or memory allocation failure.
*/

char	*get_next_line(int fd)
{
	char			*bufferstring;
	char			*thestringtoreturn;
	static char		*staticholderstring;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	bufferstring = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (!bufferstring)
		return (NULL);
	thestringtoreturn = readtxtfile(fd, bufferstring, staticholderstring);
	free(bufferstring);
	bufferstring = NULL;
	if (!thestringtoreturn)
		return (NULL);
	staticholderstring = chopatendofline(thestringtoreturn);
	return (thestringtoreturn);
}

/*
** main
** --------------------
** Description:
**   Demonstrates the usage of the get_next_line function by reading and printing lines from a file.
**
** Returns:
**   - 0 upon successful execution.
*/

int main()
{
	char *string;
	int counter;

	counter = 1;
	int filedes = open("file.txt", O_RDONLY);
	string = get_next_line(filedes);
	while(string)
	{
		printf("%d :this is teh line %s", counter, string);
		string = get_next_line(filedes);
		counter++;
	}
	return (0);
}