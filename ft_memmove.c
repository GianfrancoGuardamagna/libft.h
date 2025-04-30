#include <stdio.h>
#include <string.h>

void *memmove(void *dest, const void *src, size_t n)
{
    void *original_dest = dest;
    char *d = (char *)dest;
    const char *s = (const char *)src;
    
    if (d < s) {
        while (n--) {
            *d++ = *s++;
        }
    } else {
        d += n;
        s += n;
        while (n--) {
            *--d = *--s;
        }
    }
    
    return original_dest;
}
