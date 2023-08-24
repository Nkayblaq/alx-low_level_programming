#include "main.h"

/**
 * cap_string - function that capitalizes the first character of a word
 * @str: string to capitalize
 * Return: returns the capitalized string
 */

char *cap_string(char *str)
{
	int index = 0;

	if (str[index] >= 'a' && str[index] <= 'z')
	{
		str[index] -= 32;
	}
	while (str[index])
	{
		if (str[index] == ' ' || str[index] == '\t' ||
				str[index] == '\n' || str[index] == ',' ||
				str[index] == ';' || str[index] == '.' ||
				str[index] == '!' || str[index] == '?' ||
				str[index] == '"' || str[index] == '(' ||
				str[index] == ')' || str[index] == '{' ||
				str[index] == '}')
		{
			index++;
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] -= 32;
			}
		}
		else
		{
			index++;
		}
	}
	return (str);
}
