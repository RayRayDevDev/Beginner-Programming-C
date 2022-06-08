#include <stdio.h>
#include <stdlib.h>

main() {

	int sum = 0;
	for (size_t i = 100; i < 201; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum + (i - 1);
		}
	}
	printf("%i is the sum of the odd numbers from 100 to 200.\n", sum);
}
