#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 when done
 */
int main(void)
{
	printf("Size of a char: %lu\n byte(s)", sizeof(char));
	printf("Size of an int: %lu\n byte(s)", sizeof(int));
	printf("Size of a long int: %lu\n  byte(s)", sizeof(long int));
	printf("Size of a long int: %lu\n byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
