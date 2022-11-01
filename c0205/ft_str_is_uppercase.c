#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		/*! işareti a ve z parametleri içersinde yer alanları*/
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*büyük harf olanları 1, büyük harf dışında olan herşeyi 0 olarak döndür*/
int	main()
{
       printf("%d", ft_str_is_uppercase("GSDGSSGSGSDGDSGA"));	   
	   printf("\n%d", ft_str_is_uppercase("ABCDSFadEFGHaI"));
       printf("\n%d", ft_str_is_uppercase("-_134556ABCDEFDSFGaH67"));
}
