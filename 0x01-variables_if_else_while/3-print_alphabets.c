#include <sydio.h>
/**
 * main- entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char q = 'a';
	while (q <= 'z')
	{
		putchar(q);
		q++;
	};

	q = 'A';

	while (q <= 'Z')
	{
		putchar(q);
		q++;
	};

	putchar('\n');
	return (0);
}
