#include <stdio.h>
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int *res;
	int i;

	if (min >= max)
	{
		res = NULL;
		return(0);
	}
	res = malloc(sizeof (int) * (max - min));
	i = 0;
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	*range = res;
	return (i);
}

int main(void)
{
 int    *range;
    int    size;

    size = ft_ultimate_range(&range, 1, 35);
    printf("The amount of integers in the range is = %d\n", size);
    if (!range)
    {
        printf("Range is set to NULL\n");
        return (0);
    }
    for (int i = 0; i < size; i++)
	/*int	'i' will increment adn not restart to '0' */
        printf("%d ", range[i]);
    printf("\n");
    return (0);
}
