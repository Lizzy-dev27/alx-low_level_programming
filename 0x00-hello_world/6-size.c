#include <stdio.h>
/**
 * main -Print out sizes of data types in C
 * 
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Sizes of a char: %lu byte (S)\n",(unsigned long)sizeof(a));
	printf("Sizes of a int: %lu byte(S)\n",(unsigned long)sizeof(b));
	printf("Sizes of a long int: %lu byte(S)\n",(unsigned long)sizeof(c));
	printf("Sizes of a long long int: %lu byte(S)\n",(unsigned long)sizeof(d));
	Printf("Sizes of a float int: %lu byte(S)\n",(unsigned long)sizeof(f));
}
