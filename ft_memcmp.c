int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *string1 = s1;
	const unsigned char *string2 = s2;
	while(n > 0 && *string1 == *string2)
	{
		string1++;
		string2++;
		n--;
	}
	return *string1 - *string2;
}
