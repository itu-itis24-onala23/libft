#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    i = 0;
    char *p;
    p = (char *)malloc(sizeof(s));
    if (p == NULL)
        return (0);
    while(i < len)
    {
        *p = *(s + start);
        i++;
        start++;
        p++;
    }
    return (p);
}

int main(){
    char *p = "hello";
    printf("%s",ft_substr(p,1,3));
}