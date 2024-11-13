#include "libft.h"

static int	ft_addr(unsigned long long addr)
{
	int		i;
	char	*hexa;

	i = 0;
	hexa = "0123456789abcdef";
	if (addr >= 16)
	{
		i += ft_addr(addr / 16);
		i += ft_addr(addr % 16);
	}
	else
	{
		ft_putchar(hexa[addr]);
		i++;
	}
	return (i);
}

int	ft_putaddr(unsigned long long addr)
{
	int		i;

	i = 0;
	if (addr == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	else
	{
		ft_putstr("0x");
		i += ft_addr(addr);
	}
	return (i + 2);
}

int	ft_puthexa(unsigned int nbr, char format)
{
	int		i;
	char	*hexa;

	i = 0;
	if (format == 'x')
		hexa = "0123456789abcdef";
	else if (format == 'X')
		hexa = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		i += ft_puthexa(nbr / 16, format);
		i += ft_puthexa(nbr % 16, format);
	}
	else
	{
		ft_putchar(hexa[nbr]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int		nbr;

	nbr = n;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		ft_putnbr(n);
	}
	else if (n < 10)
		ft_putchar(48 + n);
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(48 + n);
	return (nbr);
}

unsigned int	ft_putunsigned(unsigned int n)
{
	int		i;

	i = 0;
	if (n > 9)
	{
		i += ft_putunsigned(n / 10);
		i += ft_putunsigned(n % 10);
	}
	else
	{
		ft_putchar(48 + n);
		i++;
	}
	return (i);
}
