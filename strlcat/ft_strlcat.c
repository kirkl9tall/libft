#include "size_t.h"
#include <stdio.h>
#include <unistd.h>

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
        int     x;
        int     y;
        int     z;
        x = 0;
        y = 0;

        while (dest[x])
                x++;
        while(src[y] && y < size)
        {
                dest[x + y] = src[y];
                y++;
        }
        while(dest[z])
        {
                write (1,&dest[z],1);
                z++;
        }
        write (1,"\n",1);
        return (size);
}
int main ()
{
        char dest[50] = "mojojojo ";
        const char src[] = "Hello how are you doing ?";
        size_t size = 30;
        printf("size is  : %ld\n",ft_strlcat(dest,src,size));

}
