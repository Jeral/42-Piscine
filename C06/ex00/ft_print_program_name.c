#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putstr(char *str);
void    ft_putchar(char c);
int	main(int nb, char **argv)
{
	{
        ft_purstr(argv[0]);
    }
    return(0);
}
