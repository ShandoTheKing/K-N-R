#include <stdio.h>

int main(void) {
  int celcius;

	printf("Lower limit:\t");
  int lowerLimit = getchar();

	printf("Upper limit:\t");
  int upperLimit = getchar();
	
	printf("Increment value\t");
	int incrementValue = getchar();
  
	for (celcius = lowerLimit; celcius < upperLimit; celcius = celcius + incrementValue)
		printf("\n\n%d\t%6.1f\n", celcius, (celcius*(9.0/5.0)) + 32);
}
