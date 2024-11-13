#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] <= '\0')
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
