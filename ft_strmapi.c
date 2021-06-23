#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*n_str;

	i = 0;
	if (!s)
		return (NULL);
	n_str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (n_str == NULL)
		return (NULL);
	while (s[i])
	{
		n_str[i] = f(i, s[i]);
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}
