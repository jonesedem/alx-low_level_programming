#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
    int largest;

    /* Check if 'a' is greater than or equal to both 'b' and 'c' */
    if (a >= b && a >= c)
    {
        largest = a;
    }
    /* Check if 'b' is greater than or equal to both 'a' and 'c' */
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    /* Otherwise, 'c' must be the largest */
    else
    {
        largest = c;
    }

    return (largest);
}

