#include "libft.h"

static int	ft_check_sep(char c, char charset)
{
	if (charset == c)
		return (1);
	return (0);
}

static size_t	ft_slen(const char *str, char charset)
{
	size_t		i;

	i = 0;
	while (str[i] && !ft_check_sep(str[i], charset))
		i++;
	return (i);
}

static size_t	ft_array_len(const char *str, char charset)
{
	size_t		i;
	size_t		c;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (str[i] && ft_check_sep(str[i], charset))
			i++;
		if (str[i])
			c++;
		while (str[i] && !ft_check_sep(str[i], charset))
			i++;
	}
	return (c);
}

static char	*ft_array_append(const char *str, char charset)
{
	char		*s;
	size_t		i;
	size_t		l;

	i = 0;
	l = ft_slen(str, charset);
	s = malloc(sizeof(char *) * (l + 1));
	if (!s)
		return (NULL);
	while (i < l)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(const char *str, char charset)
{
	char		**array;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	array = malloc(sizeof(char **) * (ft_array_len(str, charset) + 1));
	if (!array)
		return (NULL);
	while (str[i])
	{
		while (str[i] && ft_check_sep(str[i], charset))
			i++;
		if (str[i])
		{
			array[j] = ft_array_append(&str[i], charset);
			j++;
		}
		while (str[i] && !ft_check_sep(str[i], charset))
			i++;
	}
	array[j] = NULL;
	return (array);
}
