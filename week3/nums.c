#include <stdio.h>
#include "calc.h"

int main() {
	int decimal = 42;
	int octal = 052;
	int hex = 0x2A;
	int binary = 0b101010; // c언어가 지원하지 않는ㄷ

	printf("Decimal: %d\n", decimal);
	printf("Octal: %o (Prefix: 0%o) = %d\n", octal, octal, octal);
	printf("Hexadecimal: %x (Prefix: 0x%x) = %d\n", hex, hex, hex);
	printf("Binary: 0b101010 = %d\n", binary);

	printf("\n----------------------\n");
	printf("|      ~MATH!!~      |\n");
	printf("----------------------\n\n");

	printf(" % o + % x = %d\n", octal, hex, Sum(octal, hex)); //sum
	printf("%x = %o = %d\n", hex, octal, Sub(hex, octal)); //sub
	printf("%o * %x = %d\n", octal, hex, Mul(octal, hex)); //mul
	printf("%x / %o = %d\n", hex, octal, Div(hex, octal)); //div
	printf("반지름 %x 원주율: %.5f\n",hex, circ_circ((double)hex)); //circ_circ
	printf("반지름 %o 넓이: %.5f\n", octal, circ_area((double)octal)); //circ_area
	
	
	
	return 0;
}