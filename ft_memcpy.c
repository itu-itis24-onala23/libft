#include <unistd.h>
#include <stdio.h>

void *ft_memcpy(void *dest_src, const void *src_str, size_t n)
{
    int i;
    i = 0;
    unsigned char *ptr;
    unsigned char *ptr_src;
    ptr_src = (unsigned char*) src_str;
    ptr = (unsigned char *) dest_src;
    while (i < n)
    {
       *(ptr + i) = *(ptr_src + i);
       i++;
    }
    return (dest_src);
}
int main(){
    int dest[3] = {1,2,3};
    int src[3] = {4,4,4};
    ft_memcpy(dest,src,20);
    for(int i =0;i<3;i++){
        printf("%d ",dest[i]);
    }
}