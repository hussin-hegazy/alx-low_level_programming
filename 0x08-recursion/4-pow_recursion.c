#include "main.h"
/**
 * _pow_recursion - function power .
 *@x: x raised enter
 *@y: Wallace's raised x
 *
 * Return: that returns the value of x raised to the y power.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
