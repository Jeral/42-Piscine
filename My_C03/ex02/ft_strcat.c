#include <stdio.h>
char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
			++i;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	printf("%s\n", dest);
	return (dest);
}

int main(void)
{
	char src[]="Hello";
	char dest[]="Bitch";
	
	ft_strcat(dest,src);
}


