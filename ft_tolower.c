#include "libft.h"

int	tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
