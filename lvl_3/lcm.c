#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int	n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}

int	main(void)
{
	printf ("%d",lcm(3,7));
	return (0);
}