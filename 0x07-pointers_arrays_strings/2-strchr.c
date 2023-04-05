/**
 * _strchr - Responsible for printing from the first first letter, if any.
 * @s: source string
 * @c: The character to be searched for
 * Return: now string.
 */
char *_strchr(char *s, char c)
{
int x = 0;
for (x = 0; s[x] >= '\0'; x++)
{
if (s[x] == c)
{
return (s + x);
}
els
return ('\0');
}
}
