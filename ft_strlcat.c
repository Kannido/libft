#include "libft.h"

static int	ft_min(unsigned int a, unsigned int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		l_dest;
	size_t		l_src;
	size_t		i;

	l_dest = ft_strlen(dest);
	l_src = ft_strlen(src);
	i = 0;
	while (i + l_dest + 1 < size && src[i] != '\0')
	{
		dest[i + l_dest] = src[i];
		i++;
	}
	if (size > 0)
		dest[l_dest + i] = '\0';
	return ((unsigned int)(l_src + ft_min(size, l_dest)));
}
