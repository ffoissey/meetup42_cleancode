#include <stdlib.h>

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
    size_t  i;

    dup_str = (char *)malloc((strlen(str) + 1) * sizeof(char));
    if (dup_str != NULL)
    {
        i = 0;
        while (str[i] != '\0')
        {
            dup_str[i] = str[i];
            ++i;
        }
        dup_str[i] = '\0'; 
    }
    return (dup_str);
}