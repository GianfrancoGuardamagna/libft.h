#include <stddef.h>

size_t my_strlen(const char* str)
{
    size_t i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

size_t strlcpy(char *dst, const char *src, size_t size)
{
    size_t src_len = my_strlen(src);
    size_t i = 0;
    if (size == 0)
        return src_len;
    
    while(i < size - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';
    return src_len;
}
