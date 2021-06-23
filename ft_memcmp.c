#include "libft.h"

int	ft_memcmp(const void *str, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*st;
	unsigned char	*sr;

	st = (unsigned char *)str;
	sr = (unsigned char *)src;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && st[i] == sr[i])
		i++;
	return ((unsigned char)st[i] - (unsigned char)sr[i]);
}
