#include <fcntl.h>
#include <unistd.h>

void	putstr_fd(char *str, int fd)
{
	int	x;

	x = 0;
	while (str[x])
		write(fd, &str[x++], 1);
}
/*
int	main(void)
{
char	s[] = "said";
int		df = open ("abdo.txt", O_WRONLY);
putstr_fd(s, df);
}*/
