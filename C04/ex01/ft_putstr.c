#include <unistd.h>
void putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		++i;
	}
}

int main()
{
	char str[]="Bullshit";
	ft_putstr(str);
}
