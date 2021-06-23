#include "libft.h"

void	ft_bzero(void *str, size_t t)
{
	size_t		i;

	i = -1;
	if (t > 0)
	{
		while (++i < t)
			((char *)str)[i] = '\0';
	}
}
