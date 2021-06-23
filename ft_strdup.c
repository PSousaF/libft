#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*c;
	int		i;
	int		j;

	j = 0;
	while (src[j])
		++j;
	c = malloc(sizeof(char) * (j + 1));
	if (!c)
		return (NULL);
	i = 0;
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
