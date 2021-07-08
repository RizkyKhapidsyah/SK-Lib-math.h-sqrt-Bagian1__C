#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */
#include <conio.h>

int main() {
	double x, hasil;
	x = 7643.9;
	hasil = sqrt(x);
	printf("sqrt(%f) = %f\n", x, hasil);
	_getch();
	return 0;
}