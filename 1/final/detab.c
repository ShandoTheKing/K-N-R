#include <stdio.h>
#define TABSTOP_LENGTH 8

int main(void)
{
	int input, charCount, x;
	charCount = 0;
	while ((input = getchar()) != EOF) {
		if (input == '\t') {
			for (x = TABSTOP_LENGTH - charCount; x > 0; x--)
				putchar(' ');
			charCount = 0;
			continue;
		} else if (input == '\n') {
			charCount = 0;
		} else {
			charCount++;
		}
		putchar(input);
	}
}
