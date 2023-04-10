#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 *@s: string to loop through
 *@c: caracter to search into a string
 *Return: 0
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
