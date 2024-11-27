#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	len_fw(char *str)
{
	int	b;
	int	i;

	i = 0;
	b = 2;
	while (str[i] && b !=0)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			if (b == 1)
				b = 0;
		}
		else
		{
			b = 1;
		}
		i++;
	}
	return (i);
}
char	*first_word(char *str)
{
	char	*r;
	int	len;
	int	i;
	
	i = 0;
	while (*str && (*str==' ' || *str == '\t'))
		str++;
	
	len = len_fw(str);
	len--;
	r = (char *)malloc(len);
	if(!r)
		return (NULL);
	while (i<len)
	{
		r[i]=*str;
		i++;
		str++;
	}
	r[len]='\0';
	return (r);

}

void	rostring(char *str)
{
	char	*fw;
	int	i;

	fw = first_word(str);
	i = 0;

	while (*str && (*str==' ' || *str == '\t'))
	{	
		i++;
		str++;
	}
	while (*str && (*str == fw[i]))
	{
		str++;
		i++;
	}
	str++;
	while (*str)
	{
		write(1,&(*str),1);
		str++;
	}
	write (1, " ",1);
	while (*fw)
	{
		write(1,&(*fw),1);
		fw++;
	}
}

int	main(int argc,char argv[])
{
	if (argc >= 2)
		rostring(argv[1]);
	write(1,"\n",1);
	return (0);
}