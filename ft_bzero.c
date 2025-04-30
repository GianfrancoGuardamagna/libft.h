#include <stdio.h>
#include <strings.h>

void bzero(void *s, size_t n)
{
	unsigned char *p = s;
	while(n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
}

int	main()
{
	char charsy[] = "Hola soy Charsy!";
	printf("%s\n", charsy);
	bzero(charsy + 1, 5);
	printf("%s\n", charsy);
	return 0;
}
