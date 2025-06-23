#include <unistd.h>

char *ft_strrchr(const char *str, int c)
{
    int i;
    int control;
    int index;
    index = 0;
    i = 0;
    control = 0;
    while (*(str + i) != '\0')
    {
        if(*(str + i) == (char)c)
        {
            index = i;
            control = 1;
        }
        i++;
    }
    if (c == '\0')
        return (str + i);
    if (control)
        return (str + index);
    return (0);
}
int main(){
    char *src="bilgisayar";
    printf("%s",ft_strrchr(src,'i'));
    return 0;
}