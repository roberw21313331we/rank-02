#include <stdlib.h>

int	nlen(int n)
{
	int	c;
	
	c = 1;
	while (n/10)
	{
		n=n/10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	long	m;
	int		d;

	d = nlen(nbr);
	str = (char *)malloc(d + 1);
	if (!str)
		return (NULL);
	if (nbr == 0 || nbr == -2147483648)
	{
		if (nbr == 0)
			return("0");
		else
			return("-2147483648");
	}
	m = nbr;
	if (nbr < 0)
		m = -nbr;
	str[d] = '\0';
	if (nbr < 0)
	{
		while (d>0)
		{
			str[d] = (m % 10) + 48;
			m = m / 10;
			d--;
		}
	}
	else
	{
		while (d--)
		{
			str[d] = (m % 10) + 48;
			m = m / 10;
		}
	}
	if (nbr < 0)
		str [0] = '-';
	return (str);
}