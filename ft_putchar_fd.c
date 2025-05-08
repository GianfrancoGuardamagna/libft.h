#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return;
	write(fd, &c, 1);
}

int	main()
{
	ft_putchar_fd('4', 1);
	return 0;
}
