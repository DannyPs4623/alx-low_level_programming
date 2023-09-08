#include <stdio.h>
/**
*main - Entry point
*
*Function to print single digit numbers
*
*Return: Always 0 (Success)
*/
int main(void)
{
int numbers;

for (numbers = 48; numbers < 58; numbers++)
{
	putchar(numbers);
}
putchar(10);
return (0);
}

