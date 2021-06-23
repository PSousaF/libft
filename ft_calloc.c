#include "libft.h"

void	*ft_calloc(size_t n, size_t t)
{
	void	*i;

	i = malloc(t * n);
	if (!i)
		return (NULL);
	ft_bzero(i, n * t);
	return (i);
}
