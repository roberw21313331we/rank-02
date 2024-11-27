#include <unistd.h>

void	epur_str(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i]== ' ' || str[i] == '\t')
		{
			i++;
			while(str[i]==' ' || str[i] == '\t')
				i++;
			if (str[i])
				write(1," ",1);
		}
		else
		{
			write(1,&str[i],1);
			i++;
		}
	}
}

int	main(int argc,char *argv[])
{
	if (argc == 2)
		epur_str(argv[1]);
	return(0);
}