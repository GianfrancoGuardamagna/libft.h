#include <unistd.h>

void ft_putstr_fd(char *c, int fd)
{
	if (fd < 0)
		return;
	while(*c)
	{
		write(fd, c, 1);
		c++;
	}
}

int	main()
{
	ft_putstr_fd("Hola mundo!", 1);
	return 0;
}
