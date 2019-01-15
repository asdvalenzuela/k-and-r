#include <stdio.h>

// repeat exercise 1.03
// using a function for the conversion

float farenheitToCelsius(float fahr);

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Farenheit to Celsius Table\n\n");
	while (fahr <= upper) {
		celsius = farenheitToCelsius(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}

float farenheitToCelsius(float fahr) {
	float celsius;
	celsius = (5.0/9.0) * (fahr - 32.0);
	return celsius;
}