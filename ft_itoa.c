#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	char	*array;

	i = ft_nbrlen(n);
	array = malloc(sizeof(int) * (i + 1));
	if (!array)
		return (0);
	array[i] = '\0';
	if (n == 0)
	{
		array[0] = '0';
		return (array);
	}
	if (n < 0)
	{
		array[0] = '-';
		n *= -1;
	}
	if (n >= 10)
	{
		array[i--] = (n % 10) + '0';
		n /= 10;
	}
	array[i] = n + '0';
	return (array);
}
