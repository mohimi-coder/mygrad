#include <unistd.h>

void putnbr(int n)
{
	char *c = "0123456789";
	if (n > 9)
		putnbr(n / 10);
	write(1, &c[n % 10], 1);
}

int my_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(res);
}

int is_prime(int n)
{
	int i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return(0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i = 2;
	int p = 0;
	if (ac == 2)
	{
		int n = my_atoi(av[1]);
	       while (i <= n)
	       {
		       if (is_prime(i))
			       p += i;
		       i++;
	       }
	       putnbr(p);
	       write(1, "\n", 1);
	}
	else
	{
		putnbr(0);
		write(1, "\n", 1);
	}
}
