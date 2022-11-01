#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	/*str i degişkeni a dan başlyarak z harfine kadar */
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 127)
		/*32 başladık çünkü a harfini alması için. +=32 yapsaydık aynı kalırdı*/
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*yazılan harfleri büyük harfe çevir*/
int	main()
{
	char str[] = "abcdefgh";
	printf("%s", ft_strupcase(str));
}
