#include "main.h"
/**
 *_puts_recursion - Print a text string
 *@s: text string
 *
 *
 */
void _puts_recursion(char *s)
{
if (*s == 0)
{
putchar('\n');
return;
}
_puts_recursion(s + 1);
putchar(*s);
}
