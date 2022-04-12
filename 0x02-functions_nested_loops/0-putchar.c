#include "main.h"

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */
int main(void)

{
int i; /*Declaring statements*/
char string[8] = "_putchar"; /*Arrays*/

for (i = 0 ; i < 8 ; i++) /*Start for*/
{
_putchar(string[i]);/*display word*/
} /*End for*/

_putchar('\n');

return (0);

}
