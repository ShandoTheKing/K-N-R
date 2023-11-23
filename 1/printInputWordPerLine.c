#include <stdio.h>

int main(void)
{
	int input;
	while ((input = getchar()) != EOF) {
		if (input == ' ' || input == '\t' || input == '\n')
			putchar('\n');
		else
			putchar(input);	
	}
}
