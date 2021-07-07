#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	int sq;

	i = 1;
	sq = 1;
	if(nb == 0)
		return(0);
	while (i * i < nb)
	{
		i++;
	}
	if ((nb % i) == 0)
		return (i);
	else
		return(0);
}

int main(void)
{
    printf("%d\n", ft_sqrt(121));
    printf("%d\n", ft_sqrt(25));
    printf("%d\n", ft_sqrt(0));
    printf("%d\n", ft_sqrt(1));
    return (0);
}
