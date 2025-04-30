#include <stdio.h>
#include <string.h>

void *memchar(void *s, int c, size_t n)
{
    unsigned char *p = s;
    while(n > 0 && *p != (unsigned char)c)
    {
        n--;
        p++;
    }
    if(n > 0 && *p == (unsigned char)c)
    {
        return p;
    }
    return NULL;
}

int main()
{
    char str[22] = "Manuelita de Pehuajo.";
    printf("Original string: %s\n", str);

    char *result1 = memchar(str, 'a', 5);
    if(result1)
        printf("memchra: Found 'a' at position: %ld\n", result1 - str);
    else
        printf("memchra: 'a' not found in first 5 bytes.\n");

    char stri[22] = "Manuelita de Pehaujo.";
    char *result2 = memchr(stri, 'a', 5);
    if(result2)
        printf("memchr: Found 'a' at position: %ld\n", result2 - stri);
    else
        printf("memchr: 'a' not found in first 5 bytes.\n");

    return 0;
}

