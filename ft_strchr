#include <stdio.h>
#include <unistd.h>

char *ft_strchr(const char *str, int c)
{
    while(*str)
    {
        if(*str == (char)c)
        {
            return (str);
        }
        str++;
    }
    if(c == '\0')
        return (str);
    return (0);
}