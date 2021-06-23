#include "libft.h"

char	*ft_strnstr(const char *str, const char *src, size_t t)
{
	size_t	i;
	int		j;

	if (*src == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < t)
	{
		if (str[i] == src[0])
		{
			j = 0;
			while (src[j] && str[i + j] && i + j < t
				&& str[i + j] == src[j])
				j++;
			if (src[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (0);
}
