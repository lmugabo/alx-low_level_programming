#include <stdio.h>
 /**
  * main - Entry point
  * description - print all letters of the alphabet execpt q & e
  * Return: Always 0 (Success)
  */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
