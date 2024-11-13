#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_nbrlen(int n)
{
	long long int	nb;
	int				len;

	len = 1;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}
