#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @myVal: The string to be capitalized.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *myVal)
{
	int i;

	i = 0;
	while (myVal[i])
	{
		while (!(myVal[i] >= 'a' && myVal[i] <= 'z'))
			i++;
		if (myVal[i - 1] == ' ' ||
		    myVal[i - 1] == '\t' ||
		    myVal[i - 1] == '\n' ||
		    myVal[i - 1] == ',' ||
		    myVal[i - 1] == ';' ||
		    myVal[i - 1] == '.' ||
		    myVal[i - 1] == '!' ||
		    myVal[i - 1] == '?' ||
		    myVal[i - 1] == '"' ||
		    myVal[i - 1] == '(' ||
		    myVal[i - 1] == ')' ||
		    myVal[i - 1] == '{' ||
		    myVal[i - 1] == '}' ||
		    i == 0)
			myVal[i] -= 32;
		i++;
	}
	return (myVal);
}
