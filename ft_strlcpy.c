#include "libft.h"

size_t	ft_strlcpy(char *str, const char *src, size_t t)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (src == NULL)
		return (0);
	while (src[j])
		j++;
	if (t < 1)
		return (j);
	while (src[i] && i < t - 1)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (j);
}
