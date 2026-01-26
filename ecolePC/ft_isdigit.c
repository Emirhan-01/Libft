int	ft_isalnum(char c)
{
	while (c != '\0')
	{
		if ((c >= 48 && c <= 57))
			return (1);
	}
	return (0);
}
