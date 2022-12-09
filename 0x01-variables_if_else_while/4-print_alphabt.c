#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, omits q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}
			putchar('\n');
		return (0);
}
