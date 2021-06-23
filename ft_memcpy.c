#include "libft.h"

void	*ft_memcpy(void *str, const void *src, size_t t)
{
	size_t		i;

	i = -1;
	if (str == NULL && src == NULL)
		return (NULL);
	while (++i < t)
		((unsigned char *)str)[i] = ((unsigned char *)src)[i];
	return (str);
}
