/*Cole Stanley created this program after three hours and a lot of reading. This
was for Professor Sanika Paranjape's Introduction to Programming Class on
09/11/2021 and 09/12/2021.
* This is for Assignment number three.
* The assignment is to create a program that allows the user to input any signed
integer and receive, as the program output, the smallest input entered.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> //I assumed I needed this. 
#include <limits.h> //For the long long int type, apparently.
main() {
	long long v1, v2, v3; //Allows the user to enter very large numbers, both positive and negative.
		printf("Welcome to the Revolutionary (Minimum) Integer Selector!\n");
	//Same as previous project for input, with the exception of the format specifiers, cause my compiler yelled at me.
		printf("Please enter your first integer:\n");
	scanf_s("%I64i", &v1);
	long long min = v1; //Initialize min to v1 as that is the only variable entered at this time.
		printf("Here's what you entered: %I64i\n", v1);
	printf("Please enter your second integer:\n");
	scanf_s("%I64i", &v2);
	if (min > v2) //Next, compare min to v2. If v2 is less than v1, store 
		v2.
	{
		min = v2;
	}
	else  //Else, keep min as v1.
	{
		min = v1;
	}
	printf("Here's what you entered: %I64i\n", v2);
	printf("Please enter your third integer:\n");
	scanf_s("%I64i", &v3);
	if (min > v1 || min > v2 || min > v3) //Last, compare v3 to v1, and v2. If v3 is smaller than v1 or v2, store v3.No else statement needed as the compare operation was done in previous statementand it is not changed unless v3 is smaller than v1 or v2.
	{
		min = v3;
	}
	printf("Here's what you entered: %I64i\n", v3);
	printf("\n"); //I disliked how close the confirmation of what was entered for v3, and the output for the answer were, so I printed a new line to help fix it.
		printf("%I64i is the minimum\n", min);
	system("pause");
}