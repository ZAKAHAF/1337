void	ft_rev_int_tab(int *tab, int size) // mafahmoch
{
	int	start; // bach atbda ljadwal
	int	end; //  bahc aysali ljadwal
	int	temp;// fin ankhabiw raqm lewl

	start = 0;
	end = size - 1; // Index dyal ekhir raqm dima huwa size - 1

	// L-boucle katb9a khdama hta l-pointers ytlaqaw f l-wasat
	while (start < end)
	{
		// 1. Swap dyal tab[start] u tab[end]
		temp = tab[start]; // dekchi li start nkhabiwh f temp
		tab[start] = tab[end]; //dekchi li end nkhabiwh f start
		tab[end] = temp; // dekchi li  f temp nkhabiwh f end 

		// 2. Kanzido start l-qdam u kannaqso end l-lor
		start++;
		end--;
	}
}