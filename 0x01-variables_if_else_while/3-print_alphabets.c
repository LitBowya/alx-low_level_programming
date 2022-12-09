#include <stdio.h>

/**
 * main - prints alphabets in lowercase and uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	char A;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
		putchar('\n');
		return (0);
}
