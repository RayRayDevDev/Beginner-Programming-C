#include <stdio.h>
#include <stdlib.h>

main() {

	int a = 2, b = 4, c = 11, result;
	double d1 = 3.4, d2 = 1.7, doubleResult;

	result = a + c / b;
	printf("%i\n", result);
	result = (a + c) / b;
	printf("%i\n", result);
	result = (b * a) + c / a;
	printf("%i\n", result);
	result = (int)d1 + (int)d2;
	printf("%i\n", result);
	result = (int)(d1 + d2);
	printf("%i\n", result);
	doubleResult = c / b + 6;
	printf("%lf\n", result);
	doubleResult = (double)c / b + a;
	printf("%lf\n", result);




}
