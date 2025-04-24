#include "main.h"

/**
 * print_alphabet - Make the alphabet
 * Return: void
 */
void print_alphabet(void) {
    char c;
    for (c = 'a'; c <= 'z'; c++) {
_putchar(c);
_putchar('\n'); /* This line is likely intended to print a newline after each letter */
    }
}
