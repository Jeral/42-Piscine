#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	neg;
	
	i = 0;
	neg = 1;
	res = 0;

	while (str[i] <= 13 && str[i]  >=9 || str[i] == 32 )
	{
		++i;
	}
	while (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
		{
			neg =  neg * -1;
		}
		++i;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = (res * 10) + (str[i] - '0');
		++i;
	}
	

	return(res * neg);
}

void	ft_putnbr(int nb)
{
	if ( nb > 2147483647 || nb < -2147483648)
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
    return;

}


int main(int argc, char **argv)
{
		ft_putnbr(ft_atoi(argv[1]));
}

