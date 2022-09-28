#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	
	return (len);
}
