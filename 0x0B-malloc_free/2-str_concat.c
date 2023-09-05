#include "main.h"

/**
 * str-concat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: A pointer to a newly allocated string containing the concatenated
 *         result of s1 and s2. The caller is responsible for freeing this
 *         memory using `free()`. If memory allocation fails or if either
 *         input string is NULL, the function returns NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int i;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	concat_str = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (concat_str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat_str[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		concat_str[s1len + i] = s2[i];

	return (concat_str);
}
