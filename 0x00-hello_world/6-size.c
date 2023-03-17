#include <stdio.h>
/**
 * main - Entry point
 * Return: something 0 (good)
 */
int main(void)
{
	printf("Size of a char: %d bytes(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n",  sizeof(int));
	printf("Size of a long int:%d bytes(s)\n", sizeof(long int));
	print("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
