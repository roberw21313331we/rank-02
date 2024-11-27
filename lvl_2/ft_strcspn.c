#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;
	int	c;
	int	b;

	b = 2;
	i = 0;
	c = 0;
	while (s[i] && b!=0)
	{
		b = 1;
		j = 0;
		while (reject[j]&&b==1)
		{
			if(s[i]==reject[j])
				b = 0;
			j++;
		}
		if (b == 1)
			c++;
		i++;
	}
	return (c);
}