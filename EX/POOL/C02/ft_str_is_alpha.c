#include<stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	// Ila kant l-string khawya "", khass n-returnew 1 f 42
	if (str[i] == '\0')
		return (1);
	
	// N-dorou aala koll harf f l-string
	while (str[i] != '\0')
	{
		// Ila l-harf machi f 'a-z' U f nefss l-weqt machi f 'A-Z'
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
		{
			// Ghir n-lqaw harf wahed machi alphabet, n-rejjo 0 nichan
			return (0);
		}
		i++;
	}
	// Ila derna l-boucle kamla u lqina ghir l-letters, n-rejjo 1
	return (1);
}
int	main()
{
	char	str[] = "bcabadbvj ";
	printf("%d\n", ft_str_is_alpha(str));
}