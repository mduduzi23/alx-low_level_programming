#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'function that prints the alphabet, in lowercase, followed by a new line.'*
* print_alphabet - print all alphabet in lowercase
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
