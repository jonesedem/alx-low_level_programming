#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			if (result > (unsigned int)(INT_MAX / 10) ||
			    (result == (unsigned int)(INT_MAX / 10) && (s[i] - '0') > INT_MAX % 10))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}

	return (sign * result);
}
