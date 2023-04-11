#include <stdio.h>
#include <stdlib.h>
/**
 *main - function returning an integer.
 *@argc: argument c
 *@argv: argument v
 *Return: Success
 */
int main(int argc, char *argv[])
{
int x = 0;
int y;
int i;
char *kl;
if (argc == 1)
{
printf("0\n");
return (0);
}
for ( i = 1; i < argc; i++)
{
y = strtol(argv[i], &kl, 10);
if (*kl != '\0')
{
printf("Error\n");
return (1);
}
if (y > 0)
{
x += y;
}
}
printf("%d\n", x);
return (0);
}
