#include <stdio.h>
int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned i;
	int diff;

	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && n > 0 )
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
	i++;
	n--;
	}
return (0);
}

int main()
{
	char a[]="abcD";
	char b[]="abcd";
	int n = 4;
	printf("%d\n", ft_strncmp(a, b, n));
}
