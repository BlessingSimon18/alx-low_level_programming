#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int flag n= 1;

	check(s, 0. _strlen_recursion(s) - 1, &flag);
	return (flag);
}
