#include <unistd.h>
void ft_putnbr(int nb);
void ft_putstr(char *str);
int ft_iterative_factorial(int nb);
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
            ++i;
    }
}

void    ft_putnbr(int nb)
{
    if (nb > 2147483647 || nb < -2147483648)
    {
        return;

    }
    else if (nb == -2147483648)
    {
        ft_putstr("-2147483648");
        return;
    }
    else if (nb < 0)
    {
        nb = nb * -1;
        ft_putchar('-');
    }
    else if (nb < 10)
    {
        ft_putchar(nb + '0');
        return;
    }
    ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + '0');
    ft_putchar('\n');
    return;

}
int ft_iterative_factorial(int nb)
{
	int end;
	int i;

	end = 1;
	i = 0;
	while (nb < 1)
	{
		end = 0;
		i++;
		return(end);
	}
	while (nb > 0)
	{
		nb = nb * (nb -1);
	}

return(end);
}
void ft_putnbr(int nb);
void ft_putstr(char *str);
int ft_iterative_factorial(int nb);
void    ft_putchar(char c);
int main(int nb, char **argv)
{
	int i;

	i = 0;
	while(i < nb)
	{
		
		ft_putnbr(ft_iterative_factorial(argv[i]));
		i++;
	}
	return(0);
}
