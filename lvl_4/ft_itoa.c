#include <stdio.h>
#include <stdlib.h>

int	nlen(int n)
{
	int	c;
	
	c = 1;
	if (n<0)
	{
		c++;
		n = -n;
	}
	while (n/10)
	{
		c++;
		n = n /10;
	}
	return (c);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int	len;

	if (nbr == 0 || nbr == -2147483648)
	{
		if (nbr == 0)
			return("0");
		else
			return("-2147483648");
	}

	len = nlen(nbr);
	str = malloc (len);
	if(!str)
		return(NULL);
	str[len]='\0';
	len--;
	if (nbr<0)
	{
		nbr = -nbr;
		str[0]='-';
	}
	while(nbr>0)
	{
		str[len] = nbr%10+48;
		nbr = nbr/10;
		len--;
	}
	return (str);
}

int	main(void)
{
	printf("%s",ft_itoa(0));
	return(0);
}