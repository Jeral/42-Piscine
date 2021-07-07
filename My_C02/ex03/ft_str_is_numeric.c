#include <stdio.h>
int		ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{ 
		if (str[i] <= 47 || str[i] >= 58)
		{

				return (0);
		}
		++i;
	}
	return (1);
}

int main ()
{
	char  *str;
	char result;
	str = "12";
	result = ft_str_is_numeric(str);
	printf("%d\n", result);
}

