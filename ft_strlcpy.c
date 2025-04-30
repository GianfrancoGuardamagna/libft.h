#include <stdio.h>

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

int main()
{
    char dst[30] = "Hello, World!";
    char src[] = "Welcome to C programming!";
    size_t len = strlcpy(dst, src, 20);
    return 0;
}