#include <stdio.h>
#include <stdlib.h>

static int count_word(const char *str, char c)
{
    int i;
    int count;
    count = 0;
    i = 0;
    while (*(str + i) != '\0')
    {
        if (i == 0)
        {
            if(*(str + i) != c)
                count++;
        }else
        {
            if((*(str + i) != c && *(str + i - 1) == c))
                count++;
        }
        i++;
    }
    return (count);
}

static int word_len(const char *s, char c)
{
    int i;
    i = 0;
    while (*(s + i) != '\0' && *(s + i) != c)
    {
        i++;
    }
    return (i);
} 


char **ft_split(const char *s,char c)
{
    char **str;
    int i;
    int j;
    int m;
    int len;
    j = 0;
    i = 0;
    m = 0;
    str = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
    if(str == NULL)
        return (0);
    while (*(s + i) != '\0')
    {
        while (*(s + i) == c)
            i++;
        if(*(s + i) == '\0')
            break;
        len = word_len(s + i, c);
        str[j] = (char*)malloc(len + 1);
        if(str[j] == NULL)
            return (0);
        m = 0;
        while(m < len)
            str[j][m++] = s[i++];
        str[j][m] = '\0';
        j++;
    }
    str[j] = NULL;
    return(str);
}