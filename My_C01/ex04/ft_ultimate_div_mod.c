#include <unistd.h>
{
	int mod;
	int div;

	mod = *a/ *b;
	div = *a % *b;
	*a = mod;
	*b - div;
}
