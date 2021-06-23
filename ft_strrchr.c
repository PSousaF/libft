#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*j;
	char	y;

	i = 0;
	j = 0;
	y = (char)c;
	while (str[i])
	{
		if (str[i] == y)
			j = ((char *)str + i);
		i++;
	}
	if (str[i] == y)
		j = ((char *)str + i);
	return (j);
}
