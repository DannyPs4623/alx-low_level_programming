#include <stdio.h>

/**
* main - Prints numbers between 00 to 99.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a, b, c, d, xo, xt;

a = b = c = d = 48;
while (d < 58)
{
c = 48;
while (c < 58)
{
b = 48;
while (b < 58)
{
a = 48;
while (a < 58)
{
xo = (d * 10) + c;
xt = (b * 10) + a;
if (xo < xt)
{
	putchar(d);
	putchar(c);
	putchar(' ');
	putchar(b);
	putchar(a);
if (d == 57 && c == 56 && b == 57 && a == 57)
break;
putchar(',');
putchar(' ');
}
a++;
}
b++;
}
c++;
}
d++;
}
putchar('\n');
return (0);
}

