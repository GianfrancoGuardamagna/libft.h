#include <stddef.h>

size_t	strlen(const char *src)
{
	size_t i = 0;
	while(src[i] != '\0')
		i++;
	return i;
}

size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t dst_len;
	size_t src_len;
	size_t i;

	dst_len = 0;
	src_len = strlen(src);
	i = 0;
	if (dsize == 0)
		return src_len;
	while (dst_len < dsize && dst[dst_len] != '\0')
		dst_len++;
	if (dst_len == dsize)
		return dst_len + src_len;
	while (dst_len + i < dsize - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return dst_len + src_len;
}
