#include "libft.h"

void	*ft_memset(void *str, int c, size_t t)
{
	unsigned int	i;
	unsigned char	*change;

	i = 0;
	change = (unsigned char *)str;
	while (i < t)
	{
		change[i] = c;
		i++;
	}
	return (change);
}
