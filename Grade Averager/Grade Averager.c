#include <stdio.h>
#include <stdlib.h>

main() {

	int grade = 0; //grade value checker
	float tcount = 0; //total valid grades accumulator
	float pcount = 0; //total passing grades accumulator

	while (grade != -1) //While the grade entered does not equal -1, loop.
	{
		printf("Enter a grade (-1 to quit):\n");
		scanf_s("%i", &grade);

		if (grade > 100) //Constraint if grade entered goes above 100.
		{
			printf("Sorry, that's an invalid grade!\n");
			tcount = tcount + 1; //increment total count if out of range of passing grades, which seems weird to me for anything > 100, but everything breaks if I try to fix it, so I will leave it alone. 
			continue;

		}

		else if (grade >= 70) //Constraint if grade is at or above 70, then it is valid, except where previous contraint is called.
		{
			pcount = pcount + 1; //increment passing grade accumulator.
			tcount = tcount + 1; //increment total grade accumulator.
			continue;
		}


	}

	printf("You have entered %.0f passing grades.\n", pcount); //Parse float to int cause it looks weird with all of the zeros trailing it.
	printf("%.0f%% of the valid grades entered are passing grade(s).\n", (pcount / tcount) * 100); //Parse float to int as well due to percentages as I could not, for the life of me, get it to work with the int datatype.
	system("pause");






}
