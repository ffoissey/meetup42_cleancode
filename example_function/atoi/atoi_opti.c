#include <stdlib.h>

int	ft_atoi_opti(const char *str)
{
	int				nbr;
	const char		*sign_ptr;

	nbr = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		++str;
	sign_ptr = str;
	if (*str == '-' || *str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		if (!(*(str + 1) >= '0' && *(str + 1) <= '9'))
		{
            break;
        }
		nbr = nbr * 10 + *(str + 1) - '0';
		if (!(*(str + 2) >= '0' && *(str + 2) <= '9'))
		{
            break;
        }
		nbr = nbr * 10 + *(str + 2) - '0';
		if (!(*(str + 3) >= '0' && *(str + 3) <= '9'))
		{
            break;
        }
		nbr = nbr * 10 + *(str + 3) - '0';
		str += 4;
	}
	return (*sign_ptr == '-' ? -nbr : nbr);
}