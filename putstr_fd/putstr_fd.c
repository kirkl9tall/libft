#include <unistd.h>

void putstr_fd(char *str, int fd)
{
	int x;

	x = 0;

	while (str[x])
		write(fd,&str[x++],1);
}

int main()
{
	char str[] = "it's meeeeee !!!! ha hahahahaha\n";
	int fd = 1;

	putstr_fd(str,fd);
}

