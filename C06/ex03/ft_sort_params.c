#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}	 
	return (s1[i] - s2[i]);
}

void ft_print_parm(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int main(int argc, char **argv)
{
	char *temp;
	int i;
	
	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{	
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				i = 0;
            }
			i++;
		}
	}
	ft_print_parm(argc, argv);
	return (0);
}
