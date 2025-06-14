#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int len(const char *s1)
{
    int i;
    i = 0;
    while(*s1)
    {
        i++;
        s1++;
    }
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    j = 0;
    i = 0;
    char *str;
    if(!s1 || !s2)
        return(0);
    str = (char *)malloc(len(s1) + len(s2) + 1);
    if(str == NULL)
        return (0);
    while(*(s1 + i) != '\0')
    {
        *(str + i) = *(s1 + i);
        i++;
    }
    while (*(s2 + j) != '\0')
    {
        *(str + i) = *(s2 + j);
        j++;
        i++;
    }
    *(str + i) = '\0';
    return(str);
}
int main(){
    char *s1 = "hello";
    char *s2 = "world";
    printf("%s",ft_strjoin(s1,s2)); 
}