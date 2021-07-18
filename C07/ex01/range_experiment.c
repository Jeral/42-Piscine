#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int *res;
	int i;

	res = malloc(sizeof (int) * (max - min));
	i = 0;

	if ( min >= max)
	{
		return (NULL);
	}
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}

int main(void)
{
	int i;
	int *ptr;

	ptr = ft_range(1,182478374);
	i = 0;
	while (ptr[i] !=  '\0')
	{
		printf("%d, ", ptr[i]);
		i++;
	}
	return (0);
}
