#include <stdio.h>
#include <unistd.h>

void *ft_memmove(void *dest, void *src, size_t n)
{
    int i=0;
    unsigned char *dest_ptr = (unsigned char *)dest;
    unsigned char *src_ptr = (unsigned char *)src;

    if(dest < src || dest + n < src){
        while(i < n){
            *(dest_ptr + i) = *(src_ptr + i);
            i++;
        }
    }
    else{
        while(n--){
            *(dest_ptr + n) = *(src_ptr + n);
        }
    }
    return (dest);

}
int main(){
    char str[] = "123456";
ft_memmove(str + 2, str, 4);
// Beklenen çıktı: "121234"
printf("%s\n", str);
}