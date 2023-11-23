#include <stdio.h>

#define MAX_CHAR_COUNT_PER_WORD 20

int find_highest(int *array)
{
	int previousValue, highestValue, i;

	highestValue = 0;
	
	for (i = 0; i < MAX_CHAR_COUNT_PER_WORD; ++i) {
		if (array[i] > highestValue)
			highestValue = array[i];
	}

	return highestValue;
}

int main(void)
{
	// Start of calculation
	int input, currentWordLength, highestFrequency, i, x;
	int columnValue[MAX_CHAR_COUNT_PER_WORD] = {0};

	columnValue[MAX_CHAR_COUNT_PER_WORD] = 0;
	currentWordLength = 0;

	while ((input = getchar()) != EOF) {
		if (input == ' ' || input == '\t' || input == '\n') {
			columnValue[currentWordLength]++;
			currentWordLength = 0;
		} else {
			currentWordLength++;
		}
	}

	columnValue[0] = 0;
	highestFrequency = find_highest(columnValue);

	//Start of Printing
	for (i = highestFrequency; i > 0; --i) {
		printf("%3d\u2502", i);
		for (x = 1; x <= MAX_CHAR_COUNT_PER_WORD; ++x) {
			if (i <= columnValue[x])
				printf("XXX");
			else
				printf("   ");
		}
		printf("\n");
	}
	printf("   \u2514");
	for (i = 0; i < MAX_CHAR_COUNT_PER_WORD; i++)
		printf("\u2500\u2500\u2500");

	printf("\n   0");

	for (i = 1; i <= MAX_CHAR_COUNT_PER_WORD; i++)
		printf("%3d", i);
}
