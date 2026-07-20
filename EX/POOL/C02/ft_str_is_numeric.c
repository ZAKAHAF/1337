int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	// 1. Ila kant l-string khawya, returni 1 (rule dial 42)
	if (str[i] == '\0')
		return (1);

	// 2. N-douro aala l-string kamla harf b harf
	while (str[i] != '\0')
	{
		// Ila l-harf machi bin '0' u '9'
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			// Ghir n-lqaw chi harf machi rqem, n-returnew 0 nichan
			return (0);
		}
		i++; // N-zidou l-index bach n-choufo l-harf li morah
	}

	// 3. Ila durna aala l-string kamla u lqina ghir l-arqam, returni 1
	return (1);
}