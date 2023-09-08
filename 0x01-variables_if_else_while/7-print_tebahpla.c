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
char i[26] = "zyxwvutsrqponmlkjihgfedcba";
int letter;

for (letter = 0; letter < 26; letter++)
{
	putchar(i[letter]);
}
putchar(10);
return (0);
}

