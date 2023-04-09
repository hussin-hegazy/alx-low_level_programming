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
for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
