#include <stdio.h>

/**
 * main - print numbers from 0 to 9 separated by a coma followed by space
 *
 * Return: Always 0 (Success)
 */ 

int main(void)

{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(',');
		}
		num++;
	}
	putchar('\n')
	return (0);
}
