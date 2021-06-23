#include "libft.h"

size_t	ft_strlcat(char *str, const char *src, size_t t)
{
	size_t	i;
	size_t	j;
	size_t	x;	

	i = ft_strlen(str);
	x = ft_strlen(src);
	j = 0;
	if (t < i + 1)
		return (t + x);
	else
		x += i;
	while (src[j] != '\0' && t > i + 1)
	{
		str[i] = src[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (x);
}
