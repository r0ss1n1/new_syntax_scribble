#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/* Shout out to Johann Sebastian Bach, the composer */
/* Martha Argerich is my favourite concert pianist, the Berlin Philharmonic my favourite orchestra */
/* Gotterdamerung is the most fantastic opera & Chopin is the most relaxing piano */
/* Martha Argerich does a fantastic Cello Suite, Partita #2 (Bach) & English Suite (Bach) */
/* Charles Truscott at github.com/r0ss1n1 */
/* Karajan is arguably history's (in recorded classical history) greatest composer */
int main(int argc, char * argv[]) {

	char * string = "Charles Truscott";
	int * int_pointer;
	float * float_pointer;
	double * double_pointer;

	char string_array[] = "This is a string";
	int x = 10;
	int y = 20;
	int z = 30;

	long double j;
	int i;

	double p = 1.11122;
	double q = 22.1111;
	double r = 1.111;
	double s = 33.33333;
	int c = 0;
	for(; * string; ++string) {
		printf("The %d character in the char array is %c\n", c, * string);
		++c;
	}
	printf("x: %d\t y: %d\t z: %d\t p: %lf\t q: %lf\t r: %lf\t s: %lf\t", x, y, z, p, q, r, s);
	printf("x + y = %d\t x + z = %d\t y + z = %d\t x - y = %d\t x - z = %d\t y - z = %d\t\nx * y = %d\t x * z = %d\ty * z = %d\tx / y = %d\tx / z = %d\tx / y = %d\t\nx % y = %d\t y % z = %d\t z % x = %d\t\n\n", x + y, x + z, y + z, x - y, x - z, y - z, x * y, x * z, y * z, x / y, x / z, x / y, x % y, y % z, z % x);
	printf("p + q + r + s = %lf\t p - q - r - s: %lf\t p * q * r * s: %lf\t p / q / r / s: %lf\t\n", p + q + r + s, p - q - r - s, p * q * r * s, p / q / r / s);
	printf("x modulo y = %d\t y modulo z = %d\n", x % y, y % z);

	j = p + q + r + s / p * q * r * s;
	printf("j: %llf\n", (long double) j);
	return 0;
}