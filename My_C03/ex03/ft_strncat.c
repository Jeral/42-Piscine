#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;
	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	while ( j < nb)
	{
		dest[i] = src[j];
			++i;
			++j;
	}
	dest[i] ='\0';
	src[j] ='\0';
	return(dest);
}
int main()
{
	char dest[]="halo halo";
	char src[]="bitch bitch";

	ft_strncat(dest,src, 5);
	printf("%s\n", dest);
}
