#include <stdlib.h>
#include <stdio.h>

static int int_len(int n)
{
    int len = 0;
    if (n <= 0)
        len++;
    while (n)
    {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n)
{
    long int num = n;
    int len = int_len(n);
    char *s = (char *)malloc(len + 1);
    if (!s)
        return NULL;

    s[len] = '\0';
    if (num < 0)
    {
        s[0] = '-';
        num = -num;
    }
    else if (num == 0)
    {
        s[0] = '0';
        return s;
    }

    while (num > 0)
    {
        s[--len] = (num % 10) + '0';
        num /= 10;
    }

    return s;
}
