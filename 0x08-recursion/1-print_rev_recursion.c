#include "main.h"
/**
 *_print_rev_recursion - Print a text string
 *@s: text string
 *
 *
 */
void _print_rev_recursion(char *s)
{
if (*s == 0)
{
putchar('\n');
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}
