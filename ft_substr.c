#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*dst;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
		len = 0;
	if (s_len - start < len)
		len = s_len - start;
	dst = malloc(sizeof(char) * (s_len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);

}
