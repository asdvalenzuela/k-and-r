# include <stdio.h>

// Modify the temperature conversion program to print a heading
above the table.
int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	// in the following line, the int is converted to a float before the 
	// operation is done, the float and int can be assigned safely
	fahr = lower;

	printf("Farenheit to Celsius Table\n\n");
	// in the following line, the int is converted to a float before the 
	// operation is done, the float and int can be compared safely
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		// %d specifies an integer argument
		// %f specifies a float argument
		// 3 and 6 specify that number of digits that the field should take up
		// .0 specifies that there should be no decimal point or fractional digits
		// .1 specifies one digit after the decimal point
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}