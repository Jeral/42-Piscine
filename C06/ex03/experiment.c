#include <unistd.h>
void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str);
		++i;
	}
}

int  ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s1 != '\0' && s2 != '\0' && s1 == s2 )
	{
		i++;
	}	
	return(s1[i] - s2[i]);
}

int ft_print_param (int argc, char **argv)
{
	int i;
	i = 0;
	while(i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return;
}
