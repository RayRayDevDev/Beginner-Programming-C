#include <stdio.h>
#include <stdlib.h>

main() {

	static int mult2 = 0;
	for (size_t mult2 = 0; mult2 < 200; mult2++)
	{
		if (mult2 % 5 == 0 && mult2 % 8 == 0)
		{
			printf("%i\n", mult2);
		}

	}
}
