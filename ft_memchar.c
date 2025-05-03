#include <stddef.h>

void *ft_memchar(void *s, int c, size_t n)
{
	unsigned char *p;
	
	p = s;
	while (n > 0 && *p != (unsigned char)c)
	{
		n--;
		p++;
	}
	if (n > 0 && *p == (unsigned char)c)
		return (p);
	return NULL;
}
