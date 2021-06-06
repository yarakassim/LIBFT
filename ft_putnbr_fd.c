#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char n;

	n = ft_itoa(n);
	write(fd, &n, 1);
}
