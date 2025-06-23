#include <unistd.h>
#include <stdio.h>
#include <string.h>

// arama yapılacak byte sayısı n ile verilir
void *ft_memchr(const void *str, int c, size_t n)
{
    int i;
    i = 0;
    unsigned char *ptr;
    ptr = (unsigned char *) str;
    while (i < n)
    {
        if (*(ptr + i) == (char)c)
        {
            return (ptr + i);
        }
        i++;
    }
    return (0);
}
int main(){

int data[3] = {1,2,3};
int *ptr = ft_memchr(data, 2 , 12);
for(int i =0;i<2;i++)
{
    printf("%d ",ptr[i]);
}

}