#include <stdio.h>
/*
 * main: "A program that prints the size of various computer types"
 * Return 0 (Success))
 */
int main(void)
{
	long long int d;

printf("Size of a char: %i byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %i byte (s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %i byte (s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %i byte (s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %i byte (s)\n", (unsigned long)sizeof(float));
return (0);
}
