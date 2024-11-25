int	ft_atoi(const char *str)
{
	int	n;
	int	i;
	int	sig;

	sig = 1;
	i = 0;
	n = 0;

	while (str[i]>=9 && str[i]<=13)
		i++;
	if (str[i]== '-' || str[i]=='+')
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
	return (n*sig);
}