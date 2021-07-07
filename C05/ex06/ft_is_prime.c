#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);

	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
		
        printf("%d\n", nb);
		printf("%d\n", i);
	}
	return (1);
}
int main()
{
printf("%d\n", ft_is_prime(81));
}
