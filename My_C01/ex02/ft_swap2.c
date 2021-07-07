#include <stdio.h>
void 	ft_swap(int *a, int *b)
{
	int x;
	x=*a;
	*a=*b;
	*b=x;
}
int 	main()
{	
	int a;
	int b;
	a = 123;
	b = 456;
	ft_swap(&a,&b);
	printf("%d\n%d", a,b);
	return (0);
}
