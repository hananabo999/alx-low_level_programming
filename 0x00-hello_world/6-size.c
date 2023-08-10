#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %d byte(s)\n", sizeof(a));
printf("size of an int: %d byte(s)\n", sizeof(b));
printf("size of a long int: %d bytes(s)\n", sizeof(c));
printf("size of a long long int: %d bytes(s)\n", sizeof(d));
printf("size of a float: %d bytes(s)\n", sizeof(f));
return (0);
}
