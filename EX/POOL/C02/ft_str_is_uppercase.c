int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		// 1. Ila lqina harf machi lowercase, returni 0 nichan u khrej
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0); 
		}
		// 2. 'i++' khassha t-kun hna, dima kat-زاد f koll dorra d l-loop
		i++;
	}
	// 3. Ila tsalat l-loop bla ma n-returnew 0, hadchi kay-a'ni kollchi lowercase!
	return (1);
}