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
	return(dest);
}

int main()
{
	char *src;
	char *dest;
	char *Haha

	src = "Bitch";
	dest = "Hello";
	Haha = ft_strcat(dest,src);
	printf("%s\n", haha);
}
