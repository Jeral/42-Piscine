#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int i;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

int    main(void)
{
    int    i;
    int    *ptr;

   i = 0;
   ptr = ft_range(1,14343);
    while (ptr[i] != '\0')
    {
        printf("%d, ", ptr[i]);
        i++;
    }
    return (0);
}
