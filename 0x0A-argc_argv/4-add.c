#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - function returning an integer.
 *@argc: argument c
 *
 *@argv: argument v
 *Return: Success
 */
int main(int argc, char **argv)
{
int sum = 0;
for (int i = 1; i < argc; i++)
{
for (int j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
