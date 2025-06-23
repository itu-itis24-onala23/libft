#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *p1;
    unsigned char *p2;
    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    int i;
    i = 0;
    while (i < n)
    {
        if(*(p1 +i) != *(p2 + i))
        {
            return (*(p1 + i) - *(p2 + i));
        }
        i++;
    }
    return (0);
}
int main(){
    
char a[] = "abc\0xyz";
char b[] = "abc\0uvw";
printf("%d",ft_memcmp(a, b, 7));

}
