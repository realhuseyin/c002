#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')

		/*str a dan büyük z den büyük veya str a ve z aynı işlem ve i arttır ve 0 döndür*/
	{
		if ((str[i] >= 'A' && str [i] <= 'Z') || (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}	
	return (1);
}


/*sadece karakter varsa 1,rakam varsa 0 döndür*/
int	main()
{
	printf("%d", ft_str_is_alpha("abcdefghijkl"));
	printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
	printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
}
