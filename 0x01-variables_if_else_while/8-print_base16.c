#include <stdio.h>
/**
*main - Entry point
*
*Function to print all the numbers of base 16 in lowercase
*
*Return: Always 0 (Success)
*/
int main(void)
{
int numbers;
int letters;

for (numbers = 48; numbers < 58; numbers++)
{
	putchar(numbers);
}
for (letters = 'a'; letters <= 'f'; letters++)
{
	putchar(letters);
}
putchar(10);
return (0);
}

