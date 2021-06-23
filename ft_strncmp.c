#include "libft.h"

int	ft_strncmp(const char *str, const char *src, size_t count)
{
	size_t	i;

	i = 0;
	if (count == 0)
		return (0);
	while (i < count - 1 && str[i] != '\0' && src[i] != '\0' && src[i] == str[i])
		i++;
	return ((unsigned char)str[i] - (unsigned char)src[i]);
}
