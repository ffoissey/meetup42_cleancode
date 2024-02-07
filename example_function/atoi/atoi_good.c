#include <stdbool.h>

#define ZERO_DIGIT_ASCII_OFFSET '0'

enum e_sign
{
    NEG = -1,
    POS = 1
};

static bool is_digit(const char c)
{
    return (c >= '0' && c <= '9');
}

static bool is_sign(const char c)
{
    return (c == '+' || c == '-');
}

static bool is_whitespace(const char c)
{
    return ((c >= 9 && c <= 12) || c == ' ');
}

static char *trim_whitespaces(const char *str)
{
    while (is_whitespace(*str) == true)
    {
        ++str;
    }
    return ((char *) str);
}

static unsigned int get_number_from_character(const char c)
{
    return (c - ZERO_DIGIT_ASCII_OFFSET);
}

static unsigned int shift_10_power(const unsigned int nb)
{
    return (nb * 10);
}

static unsigned int build_number_from_digit_string(const char *str)
{
    unsigned int nb;

    nb = 0;
    while (is_digit(*str) == true)
    {
        nb = shift_10_power(nb) + get_number_from_character(*str);
        ++str;
    }
    return (nb);
}

static enum e_sign pop_sign(const char ** const str_ptr)
{
    enum e_sign sign;

    sign = POS;
    if (is_sign(**str_ptr) == true)
    {
        sign = (**str_ptr == '-') ? NEG : POS;
        ++(*str_ptr);
    }
    return sign;
}

int ft_atoi_good(const char *str)
{
    enum e_sign sign;

    str = trim_whitespaces(str);
    sign = pop_sign(&str);
    return (sign * build_number_from_digit_string(str));
}
