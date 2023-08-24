#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int r_index = size_r - 2;
    
    int len1 = strlen(n1);
    int len2 = strlen(n2);

    r[size_r - 1] = '\0';

    while (r_index >= 0 || carry)
    {
        int digit1 = (len1 > 0) ? (n1[len1 - 1] - '0') : 0;
        int digit2 = (len2 > 0) ? (n2[len2 - 1] - '0') : 0;

        int sum = digit1 + digit2 + carry;

        carry = sum / 10;
        
        if (r_index >= 0) {
            int digit = sum % 10;
            r[r_index] = digit + '0';
            r_index--;
        }

        if (len1 > 0) len1--;
        if (len2 > 0) len2--;
    }

    if (r_index >= 0)
        return (r + r_index + 1);
    else
        return (r);
}

