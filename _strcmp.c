#include "main.h"

int spy_cmp(char s1)
{
    int i = 0;
    char str[] = "disc%";
    while (i < 5)
    {
        if (str[i] == s1)
        {
            return (1);
        }
        i++;
    }
return (0);
} 
