#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')	{

		if (!(str[i] >= 32 && str [i] <= 126)){
			return (0);
		}
		i++;
	}
	return (1);
}

/*Parametre olarak verilen dize yalnızca yazdırılabilir karakterler içeriyorsa 1, başka bir karakter içeriyorsa 0
  32 boşluk karaketeri 126 tilde işareti */

int	main()
{	/*olması gereken karaketeerlin bazıları*/
	printf("%d", ft_str_is_printable("ABDELKFSCO?I340990%")); /*1 döndürür*/

	/*olmamması gererken karaketerlerin bazıları*/
	printf("\n%d", ft_str_is_printable("\n\t\v\f")); /*0 döndürür*/
		
}
