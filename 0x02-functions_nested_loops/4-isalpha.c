#include "main.h"
/**
* _isalpha - tests whether a character is from the english alpabet.
* @c: character to be checked
* Return: 1 if the character is an english character
* 0 if the character is not an english character.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
