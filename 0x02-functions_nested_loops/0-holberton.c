#include <holberton.h>
/**
 *main-printing using putchar
 *
 *Return 0
 */
int main(void)
{
char holberton[9]={'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
unsigned int a;
for (a=0 ;a<= sizeof holberton;a++)
_putchar(holberton[a]);

_putchar('\n');
return (0);
}
