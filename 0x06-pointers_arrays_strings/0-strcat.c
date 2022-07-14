#include "main.h"
#include <string.h>

/**
 * strcat - a function that concatenates two strings
 * @src: first string pointer
 * @dest:second string pointer
 */

char *_strcat(char *dest, char *src)
{
        char *result = dest;

        while(*dest != '\0')
        {
                dest++;
        }
        while(*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return result;
}
