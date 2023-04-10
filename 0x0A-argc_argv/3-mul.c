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
int x;
char er[] = "Error";
if (argc != 3)
{
printf("%s", er);
return (1);
}
x = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", x);
return (0);
}
