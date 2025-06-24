#include <stdio.h>
#include <unistd.h>
size_t len(char *ptr)
{
    size_t i;
    i = 0;
    while(*(ptr + i) != '\0')
        i++;
    return(i);
}
size_t ft_strlcat(char *dest, char *src, size_t size)
{
    //eger bellekte yeterli kadar yer varsa
    size_t i;
    size_t j;
    size_t k;
    k = len(dest);
    j = 0;
    i = 0;
    if(size > k)
    {
        while(*(dest + i) != '\0')
            i++;
        while(*(src + j) != '\0' && i < size - 1)
        {
            *(dest + i) = *(src +j);
            i++;
            j++;
        }
        *(dest + i) = '\0';
        return (k + len(src));
    }
    else
    {
       return (size + len(src));
    }

}
int main()
{
  char dest[6] = "";
  char *src = "hello";
  printf("%ld\n", ft_strlcat(dest,src,10));
  printf("%s",dest);
}

