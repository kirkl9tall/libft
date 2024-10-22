#include <unistd.h>

void putendl_fd(char *str, int fd)
{
        int x;

        x = 0;

        while (str[x])
                write(fd,&str[x++],1);
	write (fd,"\n",1);
}

int main()
{
        char str[] = "it's meeeeee !!!! ha hahahahaha";
        int fd = 1;

        putendl_fd(str,fd);
}

