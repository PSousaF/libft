#include "libft.h"

void	*ft_memmove(void *str, const void *src, size_t t)
{
	size_t			i;
	unsigned char	*strd;
	unsigned char	*strs;

	i = 0;
	strd = (unsigned char *)str;
	strs = (unsigned char *)src;
	if (strd == NULL && strs == NULL)
		return (NULL);
	if (str == src)
		return (str);
	if (strs < strd)
	{
		while (++i <= t)
			*(strd + (t - i)) = *(strs + (t - i));
	}
	else
	{
		while (t--)
			*(strd++) = *(strs++);
	}
	return (str);
}
