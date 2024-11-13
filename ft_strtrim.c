#include "libft.h"

static int	is_set(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*do_job(char *tab, const char *s1, int i, int len)
{
	int		j;

	j = 0;
	while (i < len)
	{
		tab[j] = s1[i];
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*tab;

	i = 0;
	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	while (is_set(s1[i], set))
		i++;
	while (is_set(s1[len - 1], set))
		len--;
	if (len == 0)
		i = 0;
	tab = malloc(sizeof(char) * (len - i + 1));
	if (!tab)
		return (NULL);
	do_job(tab, s1, i, len);
	return (tab);
}
