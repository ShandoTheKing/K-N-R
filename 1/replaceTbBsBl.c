#include <stdio.h>

int main(void) {
	int input;
	while ((input = getchar()) != EOF) {
		switch (input) {
			case '\t':
				printf("\\t");
				break;
			case '\b':
				printf("\\b");
				break;
			case '\\':
				printf("\\\\");
				break;
			default:
				putchar(input);
		}
	}
}
