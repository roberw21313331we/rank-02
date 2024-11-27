#include <unistd.h>

void	rot_13(char *str)
{
	char c;

	while (*str)
	{
		if (*str >='a' && *str<='z')
		{
			c = ((*str - 'a')+13)%26+'a';
			
		}
		else if(*str>='A' && *str<='Z')
			c = ((*str - 'A')+13)%26+'A';
		else
			c = *str;
		write(1,&c,1);
		str++;
	}
}

int	main (int argc,char *argv[])
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1,"\n",1);
	return(0);
}