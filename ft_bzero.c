void ft_bzero(void *s, size_t n)
{
	unsigned char *p = s;
	while(n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
}
