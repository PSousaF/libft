#include "libft.h"

void	*ft_memccpy(void *str, const void *src, int c, size_t t)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*y;

	i = -1;
	x = (unsigned char *)str;
	y = (unsigned char *)src;
	if (str == NULL && src == NULL)
		return (NULL);
	while (++i < t)
	{
		*(x + i) = *(y++);
		if (x[i] == c)
			return ((void *)(x + (++i)));
	}
	return (NULL);
}
