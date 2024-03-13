#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int		ft_strlen(const char *r);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*get_next_line(int fd);

#define BUFFER_SIZE 42

#endif
