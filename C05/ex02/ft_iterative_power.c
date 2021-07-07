#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
	int i;
	i = 0;
	i = nb;
	if ( nb < 1 & power < 1)
	{
		return(1);
	}
	if (power == 1)
	{
		return(nb);
	}
	while (power > 1)
	{	
		nb = i * nb;
		power--;
	}
return(nb);
}
int main()
{

printf("%d\n", (ft_iterative_power(2, 9)));
	return(0);

}
