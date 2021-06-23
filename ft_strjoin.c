#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	size_t	i;
	size_t	j;

	c = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!c)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		c[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		c[j++] = s2[i];
		i++;
	}
	c[j] = 0;
	return (c);
}
