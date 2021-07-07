#include <stdio.h>
int 	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
	i++;	
	}
	return (0);
}

int main()
{
	char a[]= "abcd";
	char b[]= "abcD";
	printf("%d\n", ft_strcmp(a,b));
}
