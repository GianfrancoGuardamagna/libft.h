#include <stdio.h>

size_t strlcat(char *dst, const char *src, size_t dsize)
{
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;

	if(!dst || !src || !dsize)
		return NULL;

    while(dst[j] != '\0')
    {
        j++;
    }
    k = j;
    while(j < dsize - 1 && src[i] !='\0')
    {
        dst[j] = src[i];
        i++;
        j++;
    }
    dst[dsize] = '\0';

    while(src[i] != '\0')
    {
        i++;
    }
    return i + k;
}

int    main()
{
    char charsy[9] = "Hello";
    char charsyDos[] = " Wolrd";
    printf("%ld\n", strlcat(charsy, charsyDos, 9));
    printf("%s\n", charsy);
    return 0;
}