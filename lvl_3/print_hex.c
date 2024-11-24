#include <unistd.h>

void	print_hex(unsigned int n)
{
	char	*values;

	values = "0123456789abcdef";
	if (n >= 16)
		print_hex(n/16);
	write(1,&values[n%16],1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sig;
	int	n;

	n = 0;
	sig = 1;
	i = 0;
	while (str[i]>=9&&str[i]<=13)
		i++;
	if (str[i]=='-' || str[i]=='+')
	{
		if (str[i]=='-')
			sig = -1;
		i++;
	}
	while (str[i]>='0'&&str[i]<='9')
	{
		n = (n*10)+str[i]-48;
		i++;
	}
	return(n*sig);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1,"\n",1);
	return(0);
}