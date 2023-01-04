#include "main.h"

int is_palindrome(char *s)
{
    int length = strlen(s);
    if (*s == '\0')
        return 1;
    return check_palindrome(s, length);
}

int check_palindrome(char *s, int length)
{
    if (length <= 1)
        return 1;
    if (s[0] != s[length - 1])
        return 0;
    return check_palindrome(s + 1, length - 2);
}
