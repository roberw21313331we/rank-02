#include <unistd.h>

void	ft_putnbr(int n)
{
	char nb;

	if (n == -2147483647)
		write(1,"-2147483647",11);
	else
	{
		if (n < 0)
			n = -n;
		if (n >= 10)
			ft_putnbr(n/10);
		nb = n % 10 + 48;
		write(1,&nb,1);
	}
}

int	ft_atoi (char *str)
{
	int	n;
	int	i;
	int	sig;

	i = 0;
	sig = 1;
	n = 0;
	while (str[i]>=9 && str[i]<=13)
		i++;
	if (str[i]=='-'||str[i]=='+')
	{
		if (str[i]=='-') 
			sig = -1;
		i++;
	}
	while (str[i]>='0' && str[i]<='9')
	{
		n = (n*10)+str[i]-48;
		i++;
	}
	return(n*sig);
}

int	is_prime(int n)
{
	int	i;
	int	c;

	c = 0;
	i = 1;
	while (n >= i)
	{
		if (n % i == 0)
			c++; 
		i++;
	}
	if (c==2)
		return (1);
	else
		return(0);
}

int	add_prime_sum (int n)
{
	int	m;
	int	i;

	i = 1;
	m = 0;
	while (n>=i)
	{
		if (is_prime(i))
			m +=i;
		i++;
	}
	return(m);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
	else
		write(1,"0",1);
	write(1,"\n",1);
	return (0);
}