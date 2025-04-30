#include <stdio.h>

size_t strlen(const char *str)
{
    size_t i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

int stringCheck(const char *big, const char *little, size_t pos, size_t len)
{
    size_t i = 0;
    
    while(little[i] != '\0')
    {
        if(pos >= len || big[pos] == '\0' || big[pos] != little[i])
            return 0;
        i++;
        pos++;
    }
    return 1;
}

char* strnstr(const char *big, const char *little, size_t len)
{
    size_t i = 0;
    
    if(!little || little[0] == '\0')
        return (char*)big;

    if(!big || strlen(little) > len)
        return NULL;
    
    while(i < len && big[i] != '\0')
    {
        if(big[i] == little[0])
        {
            if(stringCheck(big, little, i, len))
            {
                return (char*)&big[i];
            }
        }
        i++;
    }
    
    return NULL;
}

int main()
{
    char charsy[] = "Me cruce a martina y dijo hola";
    char charsyDos[] = "martina";
    printf("%s\n",strnstr(charsy, charsyDos, 20));
    return 0;
}