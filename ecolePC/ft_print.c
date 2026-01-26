int	ft_isprint(char c)
{
	while (c != '\0')
	{
		if ((c >= 32 && c <= 126))
			return (1);
	}
	return (0);
}
