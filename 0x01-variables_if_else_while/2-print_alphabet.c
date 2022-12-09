#include <stdio.h>

/**
 * main - prints all the alphabets in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
		putchar('\n');
		return (0);
}
