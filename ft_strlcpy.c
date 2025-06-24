#include <stdio.h>
#include <unistd.h>

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t j;
    j = 0;
    i = 0;
    if (n > 0)
    {
        while(i < n - 1 && *(src + i) != '\0')
        {
            *(dest + i) = *(src + i);
            i++;
        }
    *(dest + i) = '\0';
    }

    while(*(src + j) != '\0')
    {
        j++;
    }
    return (j);

}
int main(){
    char dest[5];
    const char *src = "merhaba";
    printf("%d \n",ft_strlcpy(dest,src,4));
    printf("%s",dest);
}