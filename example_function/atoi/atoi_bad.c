int ft_atoi_bad(const char *s)
{
    int r;
    int m;

    r = 0;
    m = 0;
    if (!s)
        return (0);
    while (*s && ((*s >= 9 && *s <= 12) || *s == 32))
        s++;
    if (*s == 45)
    {
        m = 1;
        s++;
    }
    else if (*s == 43)
        s++;
    while (*s && *s >= 48 && *s <= 58)
        r = r * 10 + (*s++ - 48);
    if (m)
        r = -r;
    return (r);
}