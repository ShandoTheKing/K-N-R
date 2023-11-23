#include <stdio.h>
#define MAX_LINE_LENGTH 1000

int getLine(char currentLine[], int maxInputLength);

int main(void)
{
	int currentLineLength, highestLineLength;
	char currentLine[MAX_LINE_LENGTH], longestLine[MAX_LINE_LENGTH];

	while ((currentLineLength = getLine(currentLine, MAX_LINE_LENGTH)) > 0)
		if (currentLineLength > 80)
			printf("%s\n", currentLine);
	
	return 0;
}

int getLine(char currentLine[], int maxInputLength)
{
	int input, lineLength;

	for (lineLength = 0; lineLength < maxInputLength-1 && (input = getchar()) != EOF && input != '\n'; ++lineLength)
		currentLine[lineLength] = input;
	
	if (input != EOF && input != '\n') {
		while ((input = getchar()) != EOF && input != '\n') 
			++lineLength;

	} else if (input == '\n') {
		currentLine[lineLength] = input;
		++lineLength;
	}
	currentLine[lineLength] = '\0';
	return lineLength;
}
