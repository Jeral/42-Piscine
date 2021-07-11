#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1)
}

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str);
		i++;
	}
}

void	ft_strcomp( char *s1, char *s2)
{
	if (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return(s1[i] - s2[i]);
}

int ft_print(int argc, char **argv)
{
	int i;
	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[i])
		i++
	}
	return;
}

int main(int argc, char **argv)
{
	int i;
	i = 0;
	if (argc > 1)
	{
		while (i < argc - 1)
			if (ft_(argv[i] argv[i + 1]) > 0)



	}

}
