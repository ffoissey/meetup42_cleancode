char *ft_strstr_bad(const char *h, const char *n)
{
    char *p;
    char *q;
    char *r;

    p = (char *)h;
    while (*p)
    {
        q = p;
        r = (char *)n;
        while (*r && *q == *r)
        {
            q++;
            r++;
        }
        if (!*r)
            return p;
        p++;
    }
    return (0);
}