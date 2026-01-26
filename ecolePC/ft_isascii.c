int	ft_isascii(char c)
{
	while (c != '\0')
	{
		if ((c >= 0 && c <= 127))
			return (1);
	}
	return (0);
}
