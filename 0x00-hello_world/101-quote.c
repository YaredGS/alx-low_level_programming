#include<stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
char ch[] = fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
write(2,  ch, sizeof(ch));
fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
return (1);
}
