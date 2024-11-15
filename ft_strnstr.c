#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1[i])
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s2[j] && i + j < n)
		{
			if (s2[j] != s1[i + j])
				break ;
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
