#include <stdio.h>
int ft_recursive_power(int nb, int power)
{
    int i;
    i = 0;
    i = nb;
    if ( nb < 1 & power < 1)
    {
        return(1);
    }
	else if (power == 1)
    {
        return(nb);
    }
	else if (power > 1)
	{
		return(nb * ft_recursive_power(nb,(power -1)));
	} 
	else
		return (nb);
}
int main()
{

printf("%d\n", (ft_recursive_power(3, 3)));
    return(0);

}
