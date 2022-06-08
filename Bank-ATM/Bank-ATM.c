#include <stdio.h>
#include <stdlib.h>

main() {

	int selection = 0;
	double balance = 2000;
	double depositMath = 0;
	double withdrawlMath = 0;

	while (selection != 4) //Loop to allow for the selection of additional menu options until "4" is stored.
	{
		printf("\nWelcome! Please make your selection!\n");
		printf("Press 1 to deposit money into the account.\n");
		printf("Press 2 to withdraw money from the account.\n");
		printf("Press 3 to see the current account balance.\n");
		printf("Press 4 to Exit.\n");
		scanf_s("%i", &selection);

		switch (selection)
		{
		case 1:
			printf("You have selected selection 1: Deposit money into the account:\n\n");
			printf("How much would you like to deposit into the account today?\n");
			scanf_s("%lf", &depositMath);
			balance = depositMath + balance;
			printf("Your new balance is: $%.2lf.\n\n", balance);
			break;
		case 2:
			printf("You have selected Selection 2: Withdraw money from the account:\n\n");
			printf("How much money would you like to withdraw from the account?\n\n");
			scanf_s("%lf", &withdrawlMath);

			if (balance - withdrawlMath < 0)
			{
				printf("Insufficient funds! Cannot make the withdrawl!\n\n");
				break;
			}
			else
			{
				balance = balance - withdrawlMath;
				printf("Your new balance is: $%.2lf.\n", balance);
				break;
			}

		case 3:
			printf("You have selected Selection 3: Check the account's balance:\n\n");
			printf("The current account balance is: $%.2lf.\n\n", balance);
			break;

		case 4:
			printf("\nThank you for banking with us! Have a great day!\n");
			break;

		default:
			printf("\nThat is not a valid selection!\n");
			break;
		}
	}



}
