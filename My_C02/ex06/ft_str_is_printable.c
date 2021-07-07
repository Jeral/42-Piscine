`
    char result;
    char str[] = {0x1b};
    result = ft_str_is_printable(str);
    printf("%d\n", result);
}
#include <stdio.h>
int		ft_str_is_printable(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if( str[i] >= 127  || str[i] <=  32)
		{	
			return(0);
		}
		++i;
	}
	return(1);
}

int main()
{
	char result;
	char str[] = {0x1b};
	result = ft_str_is_printable(str);
	printf("%d\n", result);
}
