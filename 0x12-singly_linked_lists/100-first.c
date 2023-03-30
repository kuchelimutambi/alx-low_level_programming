#include <stdio.h>

/**
 * print_intro - prints the intro message
 */
void print_intro(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	// Call the print_intro() function before executing the main code
	print_intro();

	// Rest of the program
	printf("Main function executed!\n");
	return (0);
}
