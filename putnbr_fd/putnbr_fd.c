#include <unistd.h>

void putnbr_fd(int number, int fd)
{
	int mod;

	if (number  == -2147483648)
		write(1,"-2147483648",11);
	else if (number > 9)
	{
	mod  = number % 10 + 48;
	number = number / 10;
	putnbr_fd(number,fd);
	write (1,&mod,1);
	}
	else if (number < 0)
	{	
		write (1,"-",1);
		number = -number;
		putnbr_fd(number,fd);
	}
	else if (number <= 9)
	{
		number = number + 48;
		write (1,&number,1);
	}
}
int main ()
{
	int x;
	int fd;

	x = 12321;
	fd = 1;
	putnbr_fd(x,fd);
	write  (1,"\n",1);
}
