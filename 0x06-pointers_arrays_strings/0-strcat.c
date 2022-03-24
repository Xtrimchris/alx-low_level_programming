#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
    *dest = strcat(*dest, *src);
    
    return *dest;
}
