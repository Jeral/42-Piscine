#include <stdio.h>
int ft_fibonacci(int index)
{
	if (index < 0)
		return(-1);
	else if(index == 0)
		return(0);
	else if(index <= 2)
		return(1);
	else
	   printf("%d\n", index);
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(void)
{
    printf("%d\n", ft_fibonacci(9));
    return (0);
}
