#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - function returning an integer.
 *@argc: argument c
 *@argv: argument v
 *Return: Success
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;
for (i = 1; i < argc; i++)
{
int j;
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
int num = atoi(argv[i]);
if (num > 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}
