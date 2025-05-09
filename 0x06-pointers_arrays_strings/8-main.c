#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "ROT13 (rotate by 13 places) is simple!";
	char *p;

	p = rot13(s);
	printf("%s\n", p);
	p = rot13(s); /* Apply rot13 again to get original string */
	printf("%s\n", p);
	return (0);
}

