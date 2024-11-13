#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t n)
{
	void	*array;

	if (!nmemb || !n)
		return (NULL);
	array = malloc(n * nmemb);
	if (!array)
		return (NULL);
	array = ft_memset(array, 0, n * nmemb);
	return (array);
}
