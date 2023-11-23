#include <stdio.h>

int main(void) {
	unsigned tabCount, spaceCount, newlineCount, inputChar;

	newlineCount = 0;
	spaceCount = 0;
	tabCount = 0;

	while ((inputChar = getchar()) != EOF) {
		if (inputChar == '\n') {
			newlineCount++;
		} else if (inputChar == ' ') {
			spaceCount++;
		} else if (inputChar == '\t') {
			tabCount++;
		}
	}

	printf("New Lines:\t%d\nSpaces:\t\t%d\nTabs:\t\t%d\n", newlineCount, spaceCount, tabCount);
}
