#include <string.h>
#include <stdbool.h>

static size_t   ft_strlen(const char *str)
{
    size_t  count;

    count = 0;
    while (str[count] != '\0')
    {
        ++count;
    }
    return (count);
}

static bool ft_strnequal(const char *str1, const char *str2, const size_t max_len)
{
    size_t  i;

    i = 0;
    while (i < max_len && (str1[i] != '\0' || str2[i] != '\0'))
    {
        if (str1[i] != str2[i])
        {
            return (false);
        }
        ++i;
    }
    return (true);
}

char *ft_strstr_good(const char *haystack, const char *needle)
{
    const size_t needle_len = ft_strlen(needle);

    while (*haystack != '\0')
    {
        if (ft_strnequal(haystack, needle, needle_len) == true)
        {
            return ((char *) haystack);
        }
        ++haystack;
    }
    return (NULL);
}
