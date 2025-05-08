#include <unistd.h>

void ft_putendl_fd(char *c, int fd)
{
	if (fd < 0)
		return;
	while(*c)
	{
		write(fd, c, 1);
		c++;
	}
	write(fd, "\n", 1);
}

int	main()
{
	ft_putendl_fd("Hola mundo!", 1);
	return 0;
}

