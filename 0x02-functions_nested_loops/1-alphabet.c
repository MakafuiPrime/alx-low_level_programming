#include "main.h"

char _putchar(char c);
void print_alphabet(void);
/**
 *  * print_alphabet - Entry point
 *   * Return:0
 *    */

int main(void)
{

	char c = 'a';

		while (c <= 'z')
		{
		        _putchar(c);
			c++;

		}
		_putchar('\n');

}
