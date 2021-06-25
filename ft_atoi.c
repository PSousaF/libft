#include "libft.h"

int	ft_atoi(const char *str)
{
	int		y;
	int		z;
	int		x;

	x = 0;
	y = 1;
	z = 0;
	while (str[x] == ' ' || str[x] == '\t'
		|| str[x] == '\n' || str[x] == '\r'
		|| str[x] == '\v' || str[x] == '\f')
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			y = -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
		z = z * 10 + str[x++] - '0';
	return (z * y);
}
