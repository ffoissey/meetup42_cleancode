#include <string.h>

const char	*ft_strstr_old(const char *haystack, const char *needle)
{
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		j = 0;
		k = i;
		while (needle[j] == haystack[k] && needle[j])
		{
			j++;
			k++;
		}
		if (!needle[j])
			return (haystack + i);
		i++;
	}
	return ((haystack[i] == needle[j]) ? (haystack + i) : NULL);
}