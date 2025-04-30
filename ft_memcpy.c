#include <stdio.h>

void *memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *s = dest;
	while(n > 0 && src)
	{
		s = src;
		s++;
		src++;
		n--;
	}
}

int	main()
{
	char charsyDest[] = "Hola";
	char charsySrc[] = "Chau";
	memcpy(charsyDest, charsySrc, 4);
	printf("%s", charsyDest);
	return 0;
}
