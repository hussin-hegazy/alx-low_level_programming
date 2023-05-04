/**
 * print_binary - prints the binary representation of a number
 * @n: base 10 number
 *
 * Return: No return
 *
 */
#include <stdio.h>
#include "main.h"
void print_binary(unsigned long int n)
{
unsigned long int mlb = 1UL << (sizeof(n) * 8 - 1);
while (mlb)
{
putchar((n & mlb) ? '1' : '0');
mlb >>= 1;
}
}

