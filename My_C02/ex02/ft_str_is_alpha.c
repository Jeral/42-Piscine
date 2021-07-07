#include <stdio.h>
int 		ft_str_is_alpha(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
		{
			if (str[i] < 'A' || str[i] > 'Z' && str[i] <'a' || str[i] > 'z')
			return(0);
			++i;
		}
	rturn(1);
}
int main ()
{
	char *str;
	int retourne;
	str = "ABcde22T";
	retourne = ft_str_is_alpha(str);
	printf("%d",retourne);
}
