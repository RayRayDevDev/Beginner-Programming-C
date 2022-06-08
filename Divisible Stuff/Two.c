#include <stdio.h>
#include <stdlib.h>

main() {
	int sum = 0;
	for (size_t i = 500; i < 801; i++)
	{
		if (i % 8 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%i is the sum of numbers from 500 to 800.\n", sum);
}
