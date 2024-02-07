#include <stdlib.h>

// Don't Repeat Yourself

char *ft_strcpy(char *dest, const char *src)
{
    size_t i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
    return (dest);
}

char *ft_strdup(const char *str)
{
    char    *dup_str;

    dup_str = (char *)malloc((strlen(str) + 1) * sizeof(char));
    if (dup_str != NULL)
    {
        ft_strcpy(dup_str, str);
    }
    return (dup_str);
}