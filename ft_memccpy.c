#include "libft.h"

void	*ft_memccpy(void *str, const void *src, int c, size_t t)
{
	size_t	i;

	i = -1;
	if (str == NULL && src == NULL)
		return (NULL);
	while (++i < t)
	{
		((unsigned char *)str)[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return (str + (++i) + 1);
	}
	return (NULL);
}
