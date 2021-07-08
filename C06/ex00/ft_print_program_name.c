#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	int i;
	i = 0;
	while ( i != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}

}

void	ft_putstr(char *str);
void    ft_putchar(char c);
int	main(int nb, char **argv)
{
    int i;

    i = 0;
  	{

        ft_putstr(argv[-1]);
        i++;
    }
    return(0);
}
