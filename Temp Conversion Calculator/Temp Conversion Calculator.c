#include <stdio.h>
#include <stdlib.h>

int fConversion(int input); //Declare F to C conversion function, as the compiler was yelling at me.
int cConversion(int input); //Declare C to F conversion function, as the compiler continued to yell at me.
int choice(int input); //Declare the choice function for the aforementioned reasons as well. 

void menu() { //First call--displays the menu.

	int selection = 0;

	while (selection != 3) //Loop to return back to the main function upon the number 3 being entered.
	{
		printf("Welcome! Please make a selection:\nPress 1 to convert between Fahrenheit and Celsius.\nPress 2 to convert between Celsius and Fahrenheit.\nPress 3 to exit.\n");
		scanf_s("\n%i", &selection); //Store user inpiut in the "selection" variable.
		choice(selection); //second call; parsing selection into the "choice" function. 
	}

}

int choice(int selection) { //Second call--uses "Selection" integer to determine which "case" to execute.

	int input = 0; //This variable is used to store the users entered temperature. 

	switch (selection)
	{
	case 1:
		printf("\nUse this option to convert from Fahrenheit to Celsius.\nPlease enter the temperature in Fahrenheit to begin:\n\n");
		scanf_s("\n%i", &input);
		printf("\n%i degrees Fahrenheit is equivalent to %i degrees Celsius.\n\n", input, fConversion(input)); //Third call to fConversion function. Upon the return statement, displays calculation from fConversion function call. 
		break;
	case 2:
		printf("\nUse this option to convert from Celsius to Fahrenheit.\nPlease enter the temperature in Celsius to begin:\n\n");
		scanf_s("\n%i", &input);
		printf("\n%i degrees Celsius is equivalent to %i degrees Fahrenheit.\n\n", input, cConversion(input)); //Alt Third call to cConversion function. Unpon the return statement, displays calculation from cConversion function call. 
		break;
	case 3:
		printf("\nThanks for using the temperature conversion calculator!\nHave a great day!\n\n");
		break;
	default:
		printf("\nThat is not a valid selection!\nPlease try again!\n\n");
		break;
	}

	return(input);
}

int fConversion(int input) { //Function to convert from F to C. Parses "input" variable into function to return calculation to the calling function. 

	int result = 0; //Variable to store conversion integer. 

	result = (5.0 / 9.0) * (input - 32);
	return(result); //Returns calculated conversion stored in the "result" variable to the calling function. 

}

int cConversion(int input) { //Function to convert from F to C. Parses "input" variable into function to return calculation to the calling function. 

	int result = 0; //Variable to store conversion integer. 

	result = (9.0 / 5.0) * input + 32;
	return(result); //Returns calculated conversion stored in the "result" variable to the calling function.

}

void main() { //Main function to call the menu function and to pause once the program termination condition is met. 
	menu();
	system("pause");
}
