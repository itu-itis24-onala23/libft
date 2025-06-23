#include <unistd.h>
#include <stdio.h>
int len(const char *s1)
{
    int i;
    i = 0;
    while (*s1)
    {
        i++;
        s1++;
    }
    return (i);
}

char *ft_strnstr(const char *str1, const char *str2, size_t n)
{
    int i;
    int j;
    int len_s;
    len_s = len(str2);
    j = 0;
    i = 0;
    while (*(str1 + i) != '\0' && i + len_s <= n)
    {
        j = 0;
        while (*(str1 + i + j) == *(str2 + j))
        {
            if(j == len_s - 1)
                return ((char *)str1 + i);
            j++;
        }
        i++;
    }
    return (0);
}
int main(){
    char a[]="hello world";
    char b[]="world";
    printf("%s",ft_strnstr(a,b,11));
}
