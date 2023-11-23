#include <stdio.h>
#define MAX_LINE_LENGTH 1000

int getLine(char currentLine[], int maxInputLength);
char removeTrailingWhitespace(char line[], int lineLength);

int main(void)
{
	int currentLineLength;
	char currentLine[MAX_LINE_LENGTH];	

	while ((currentLineLength = getLine(currentLine, MAX_LINE_LENGTH)) > 0) {
		currentLineLength = removeTrailingWhitespace(currentLine, currentLineLength);
		if (currentLine[0] != '\n')
			printf("%s", currentLine);	
	}
	
	return 0;	
}	

int getLine(char currentLine[], int maxInputLength)
{
	int input, lineLength;

	for (lineLength = 0; lineLength < maxInputLength && (input = getchar()) != EOF && input != '\n'; ++lineLength)
		currentLine[lineLength] = input;
	if (input == '\n') {
		currentLine[lineLength] = input;
		++lineLength;
	} 

	currentLine[lineLength] = '\0';
	return lineLength;
}

char removeTrailingWhitespace(char currentLine[], int lineLength)
{
	for (int x = lineLength-2; currentLine[x] == ' ' || currentLine[x] == '\t'; --x)
		lineLength--;
	if (currentLine[lineLength-1] != '\n') {	
		currentLine[lineLength] = '\n';
		lineLength++;
	}

	currentLine[lineLength] = '\0';
	return lineLength;
}
