#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (s1[i] && s1[i] == s2[i] && i < n)
			i++;
		return ((unsigned int)(s1[i] - s2[i]));
	}
	return (0);
}
