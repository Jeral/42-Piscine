#include <stdio.h>
void ft_swap(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
}

int main()
{
	int a =234 ;
	int b =3672;
	ft_swap(&a, &b);	
	printf("%d\n%d", a, b);
}
