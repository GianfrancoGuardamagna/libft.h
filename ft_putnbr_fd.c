#include <unistd.h>
#include <stdio.h>

void ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (fd < 0)
		return;
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

int	main()
{
	ft_putnbr_fd(-4725, 1);
	return 0;
}

