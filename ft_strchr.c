#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	j;

	i = 0;
	j = (unsigned char)c;
	while (str[i])
	{
		if (str[i] == j)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == j)
		return ((char *)str + i);
	return (0);
}
