#include <stdio.h>

static int len(const char *s)
{
    int i;
    i = 0;
    while(*(s + i) != '\0')
        i++;
    return (i);
}
static int start(char const *s1, char const *set,int i)
{
    int j;
    int control;
    control = 0;
    while (*(s1 + i) != '\0')
    {
        j = 0;
        control = 0;
        while (j < len(set) && control == 0)
        {
            if(*(s1 + i) == set[j])
            {
                control = 1;
                break;
            }
            j++;
        }
        if(control == 0)
            return (i);
        i++;
    }
    return (i);
}
static int end(char const *s1, char const *set,int i)
{
    int j;
    int control;
    control = 0;
    int m = len(set);
    while (i >= 0)
    {
        j = 0;
        control = 0;
        while (j < m && control == 0)
        {
            if(*(s1 + i) == set[j])
            {
                control = 1;
                break;
            }
            j++;
        }
        if(control == 0)
            return (i);
        i--;
    }
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *s;
    int i;
    int j;
    int m;
    m = 0;
    j = end(s1,set,len(s1) - 1);
    i = start(s1, set, 0);
    if (j < i)
    {
        char *empty;
        empty = (char *)malloc(1);
        if (!empty)
            return (NULL);
        empty[0] = '\0';
        return (empty);
    }
    s = (char*)malloc(j - i + 2);
    if(s == NULL)
        return (0);
    while(i <= j)
        s[m++] = s1[i++];
    s[m] = '\0';
    return (s);
}
int main(){
    char *s1 = "ababHelloabab";
    char *s2 = "ab";
    printf("%s",ft_strtrim(s1,s2));
    return 0;
}