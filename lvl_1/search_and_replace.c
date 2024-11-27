#include <stdio.h>
#include <unistd.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	ft_contains(char *str, char *c)
{
	int	i;
	int	b;

	b = 0;
	i = 0;

	while (*str && b != 1)
	{
		if(*str == *c)
			b = 1;
		str++;
	}
	return (b);
}

void	search_and_replace(char *str, char *s, char *r)
{
	char	c;
	if (ft_contains(str,s) == 0)
	{
		while (*str)
		{
			write(1,&(*str),1);
			str++;
		}
	}
	else
	{
		while (*str)
		{
			if (*str== *s)
				c = *r;
			else
				c = *str;
			write(1,&c,1);
			str++;
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 4 && (ft_strlen(argv[2])==1 && ft_strlen(argv[3])==1))
		search_and_replace(argv[1],argv[2],argv[3]);
	write(1,"\n",1);
	return (0);
}
