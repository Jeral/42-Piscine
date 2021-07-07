#include <stdio.h>
  int 	ft_iterative_factorial(int nb)
{
    int end;
    int i;

    end = nb;
    i = 0;
    while (nb < 1)
    {
        end = 0;
        return(end);
    }
    while (nb > 1)
    {
        end =(nb -1) * end;
        nb--;
    }
return(end);
}

int main()
{
	int nb;
	nb = 12;
	printf("%d\n", ft_iterative_factorial(nb));
}
