#include <unistd.h>

void *ft_bzero(void *str, size_t n)
{
    int i;
    i = 0;
    unsigned char *p;
    p = (unsigned char *)str;
    while (i < n)
    {
        *(p + i++) = 0;
    }

}