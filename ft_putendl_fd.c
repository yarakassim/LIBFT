#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char n;

	n = '\n';
	write(fd, s, 1);
	write(fd, &n, 1); 
}
