/* This code was written by Cole Stanley as part of his Intro to Programming
Concepts class on September 3rd, and September 4th, 2021 for Professor Paranjape's
class.
This code is all my own, and I am quite proud of it if I am being honest! However,
it does have some bugs in it, but they are not anything I can fix quite yet--I look
forward to fixing them over time as I learn more though! */
#include <stdio.h>
#include <stdlib.h>
main() {
	int inputValueOne;
	int inputValueTwo;
	//Just for fun
	printf("Welcome to my totally-not-at-all-buggy-integer-only-calculator!\n");
	//First user input
	printf("Please enter your first integer (Decimals are dangerous. Bad 
		decimals.) :\n");
		scanf_s("%i", &inputValueOne);
	printf("You have entered: %i\n", inputValueOne);
	//Second user input. Since I dunno how to write an "if/else" statement yet, I
	just have to ask the user nicely not to break my program.
		printf("Please enter your second integer (Except for \"0\" or you'll break my
			fragile program...) :\n");
		scanf_s("%i", &inputValueTwo);
	printf("You have entered: %i\n", inputValueTwo);
	//Now its time to do some fun math stuff.
	int sum = inputValueOne + inputValueTwo;
	int difference = inputValueOne - inputValueTwo;
	int product = inputValueOne * inputValueTwo;
	int quotient = inputValueOne / inputValueTwo;
	//Results are printed to the screen.
	printf("Here are your results!\nThe sum of %i + %i is equal to: %i\n",
		inputValueOne, inputValueTwo, sum);
	printf("The difference between %i - %i is equal to: %i\n", inputValueOne,
		inputValueTwo, difference);
	printf("The product of %i * %i is equal to: %i\n", inputValueOne,
		inputValueTwo, product);
	printf("The quotient of %i / %i is equal to: %i\n", inputValueOne,
		inputValueTwo, quotient);
	system("pause");
}
