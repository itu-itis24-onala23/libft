#include <unistd.h>

int ft_tolower(int c)
{
    if(c <= 'Z' && c >= 'A')
    {
        c = c + 32;
    }
    return (c);
}