#include <stdlib.h>

char *ft_strstr_opti(const char *h, const char *n)
{
    const char *p_h = h;
    const char *p_n = n;
    const char *match_start = NULL;

    if (!*n)
        return (char *)h;
    while (*p_h)
    {
        if (*p_h == *p_n)
        {
            if (!match_start)
                match_start = p_h;
            ++p_n;
            if (!*p_n)
                return (char *) match_start;
        }
        else
        {
            if (match_start)
            {
                p_h = match_start;
                match_start = NULL;
                p_n = n;
            }
        }
        ++p_h;
    }
    return (NULL);
}
