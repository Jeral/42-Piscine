#include <stdio.h>
int	ft_strlen(char *str)
{
	int i;
	i = 0;
	 
	while (str[i] != '\0')
	{
		++i;
	}
	printf("%d\n", i);
	return (i);
}
int main()
{ 
	char str[]="Swim";
	ft_strlen(str);
}
