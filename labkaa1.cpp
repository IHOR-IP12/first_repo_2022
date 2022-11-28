#include <stdio.h>
#include <math.h>

int main() {
	double z, y, res;
	z = 3.127;
	y = 7.315;
	const int e = 2.718;

	res = 16 * pow(y, 2) + pow(e, y) * pow(e, z) + pow(z, 1 / 3) + pow(1.51, 1 / 3) + log(y * z);


	printf("res = %f\n", res);
	return 0;
}








