char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// Ila lqina l-harf minuscule (bin 'a' u 'z')
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			// N-naqqso 32 bash y-welli uppercase (majuscule)
			str[i] = str[i] + 32;
		}
		i++; 
	}
	// L-fonction khassha t-returni l-string brasha f l-lakher
	return (str);
}