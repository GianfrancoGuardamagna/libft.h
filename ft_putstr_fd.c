#include "libft.h"

void	ft_putstr_fd(char *c, int fd)
{
	if (fd < 0)
		return ;
	while (*c)
	{
		write(fd, c, 1);
		c++;
	}
}
