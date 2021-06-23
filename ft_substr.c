#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*c;

	c = (char *)malloc(sizeof(*s) * (len + 1));
	if (!c)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			c[j] = s[i];
			j++;
		}
		i++;
	}
	c[j] = 0;
	return (c);
}
