void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
Write a program that multiplies two positive numbers.

Usage: mul num1 num2
num1 and num2 will be passed in base 10
Print the result, followed by a new line
If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98
num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98
