#include "main.h"

int checker(char *s, int a, int c);
int str_length(char *str);

/**
 * is_palindrome - checks whether string is a palindrome
 * @s: pointer to string to be assesed
 *
 * Return: 1 if palindrome ,else 0
 */
int is_palindrome(char *s)
{
	int len = str_length(s);

	return (checker(s, 0, len - 1));
}
/**
 * checker -checks whether string is a palindrome
 * @s: string to be checked
 * @a: start
 * @c:end
 *
 * Return: 0 or 1
 */
int checker(char *s, int a, int c)
{
	if (a >= c)
		return (1);
	if (s[a] != s[c])
		return (0);
	return (checker(s, (a + 1), (c - 1)));
}
/**
 * str_length - recursively calculates the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */
int str_length(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + str_length(str + 1));
}
