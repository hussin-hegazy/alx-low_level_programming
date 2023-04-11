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
int sum = 0;
int num;
char *endptr;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (int i = 1; i < argc; i++)
{
num = strtol(argv[i], &endptr, 10);
if (*endptr != '\0')
{
printf("Error\n");
return (1);
}
if (num > 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}
