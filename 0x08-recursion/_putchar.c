#include <unistd.h>

/**
* This is my _putchac.c 
*/

int _putchar(char c)
{
    return write(STDOUT_FILENO, &c, 1);
}

