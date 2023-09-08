#include <stdio.h>
/**
*main - Entry point
*
*Function to print all possible combinations of two digits up to 89
*
*Return: Always 0 (Success)
*/
int main(void)
{
int x;
int y;

for (x = 48; x <= 56; x++)
{
for (y = 49; y <= 57; y++)
{
if (x < y)
{
	putchar(x);
	putchar(y);
if (x != 56 || y != 57)
{
	putchar(',');
	putchar(' ');
}
}
}
}
putchar(10);
return (0);
}

