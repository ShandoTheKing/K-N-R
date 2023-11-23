#include <stdio.h>
#define MAX_LINE_LENGTH 1000

int getLine(char currentLine[], int maxInputLength);
void reverseLine(char line[], int lineLength);
void copyArray(char from[], char to[]);

int main(void)
{
	int currentLineLength;
	char currentLine[MAX_LINE_LENGTH];	

	while ((currentLineLength = getLine(currentLine, MAX_LINE_LENGTH)) > 0) {
		reverseLine(currentLine, currentLineLength);
		printf("%s", currentLine);
	}
	
	return 0;	
}	

void reverseLine(char line[], int lineLength)
{
	char reversedLine[lineLength];
	int currentIndexOfInput, currentIndexOfOutput;
	
	reversedLine[lineLength] = '\0';
	currentIndexOfInput = lineLength - 1;
	

	for (currentIndexOfOutput = 0; currentIndexOfOutput != lineLength; currentIndexOfOutput++) {
		reversedLine[currentIndexOfOutput] = line[currentIndexOfInput];
		currentIndexOfInput--;
	}

	copyArray(reversedLine, line);
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

void copyArray(char from[], char to[])
{
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
