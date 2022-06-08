#include <stdio.h>
#include <stdlib.h>

main() {

	signed int choice[50] = { 0 }; //Allow for signing; set the array size to 50 elements; initialize all said elements to "0" to prevent junk data being introduced into the array from memory. 
	int count = 0; //Initialize the count variable to "0" to prevent inaccurate counts, or other errors from occurring. 

	for (size_t count = 0; count < 50; count++) //Loop to prompt user for inputs and to store values into the "choice" array. 
	{
		printf("Please enter an integer; enter -999 to quit.\n");
		scanf_s("%ld", &choice[count]); //For every input made by a user, read counter position, and insert user's input choice into the corresponding position in the array.

		if (choice[count] == -999) //Jump condition. 
		{
			break;
		}
	}

	for (size_t i = 0; i < 50; i++) //Secondary loop to display the contents of the array to the user's screen.

	{
		if (choice[i] == -999) //Listed first such that, if the next element to be displayed in the array is equal to "-999," the next element will not be displayed, nor will any element after that be displayed either, and will therefore cause the program to jump out of the loop as a result. 
		{
			break;
		}

		printf("Element %i contains the number: %i\n", i + 1, choice[i]); //Printing element position + 1 to make the output more readable for the average user. Indexing it against position "i" in the "choice" array such that each element is displayed in the proper position within the array as a result.  



	}

	system("pause"); //Added due to continually accidentally terminating the program before able to see output on larger input conditions, and it was annoying me to have to start over all of the time. 
}
