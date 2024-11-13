#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dst;

	if (!src)
		return (NULL);
	dst = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dst)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
