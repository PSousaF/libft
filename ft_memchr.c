#include "libft.h"

void	*ft_memchr(const void *str, int src, size_t t)
{
	unsigned char	*st;
	size_t			i;	

	st = (unsigned char *)str;
	i = 0;
	while (i < t)
	{
		if (st[i] == (unsigned char)src)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
