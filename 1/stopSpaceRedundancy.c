#include <stdio.h>

int main(){
	int input, count;
	
	count = 0;

	while ((input = getchar()) != EOF) {
		if (input == ' ') {
			putchar(input);	
			while ((input = getchar()) == ' ') {
				count++;
			}
		}
		putchar(input);
	}

	printf("\n<<>><<>><<>><<>><<>><<>><<>>\nSpaces omitted:\t%d\n", count);
}
