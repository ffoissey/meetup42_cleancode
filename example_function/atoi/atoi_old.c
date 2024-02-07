#include <stdlib.h>

int	ft_atoi_old(const char *str)
{
	size_t		i;
	int			nbr;

	nbr = 0;
	i = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + str[i++] - '0';
	return (str[0] == '-' ? -nbr : nbr);
}