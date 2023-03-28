#include "main.h"
/**
 * print_rev -print the string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
        int revers = 0;
        int o;

        while (*s != '\0')
        {
                revers++;
                s++;
        }
        s--;
        for (o = revers; o > 0; o--)
        {
                _putchar(*s);
                s--;
        }

        _putchar('\n');
}
