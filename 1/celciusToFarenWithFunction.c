#include <stdio.h>

float convertToCelcius(float farenheit);

int main(void)
{
	float farenheit, celcius;
	int firstValue, lastValue, incrementValue;

	firstValue	= 0;
	lastValue	= 300;
	incrementValue = 20;

	for (farenheit = firstValue; farenheit <= lastValue; farenheit += incrementValue) {
		celcius = convertToCelcius(farenheit);
		printf("%3.0f %6.1f\n", farenheit, celcius);
	}

	return 0;
}

float convertToCelcius(float farenheit) {
	return (5.0/9.0) * (farenheit-32);
}

