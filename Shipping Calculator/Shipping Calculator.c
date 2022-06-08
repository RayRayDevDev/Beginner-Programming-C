/*Cole Stanley wrote this code after several hours of additional research and debugging on 09/12/2021 for Professor Sanika Paranjape's class.
* Assignment number four consists of creating a shipping calculator which will calculate the total shipping costs depending on a set of parameters.
* There are different prices depending on the aforementioned parameters, such as weight and distance.
* This program is able to calculate the shipping cost for any value, including floating point values, while adhering to the conditions as specified.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

main() {

	printf("Please use this Shipping Calculator to approximate any charges due at the time of shipping.\nPlease note that packages over 200 pounds will not be shipped and therefore will not be quoted.\n");

	float weight; //Trying to cover any possible value as real-world applications would include decimals.
	float distance; //Same as above.

	printf("Please enter the package's weight:\n");
	scanf_s("%f", &weight);
	if (weight > 200) //Check for packages weighing more than 200 pounds, and terminate the program if so.
	{
		printf("Sorry, we only ship packages of 200 pounds or less.\n");
		return 1;
	}
	printf("The weight you entered is: %.2f\n", weight);

	printf("Please enter the total shipping distance:\n");
	scanf_s("%f", &distance);
	printf("The distance you entered is: %.2f\n", distance);

	float calc1; //If weight is <= 100 final answer variable.
	float calc2; //If weight is > 100 but <= 200 final answer variable.
	int distanceMath; //Intermediate calculation variable--taking advantage of truncating when parsing from float to int variable. 
	int price; //Price variable, per if statement. 

	if (weight <= 100)
	{
		if (distance <= 1000) //Nested loop to account for the distance variable.
		{
			distanceMath = 1; //In this condition, the charge will always equal what is stored in the "price" variable, and therefore only needs to be multiplied by 1 as a result. 
		}
		else if (distance > 1000)
		{
			distanceMath = ((distance + 999) / 1000); //The only way I could think of to get the correct answers when doing the math was to truncate the float value to an int, which would then round the output to the correct dollar amount.
		}
		price = 10.00; //Price for less than or equal to 100 pounds.
		calc1 = distanceMath * price; //Final dollar calculation for the above conditions. 
		printf("Your total shipping cost is: $%.2f\n", calc1); //Print the contents of calc1 to the screen as the cost for the above conditions. 

	}
	else if (weight > 100 || weight <= 200) //To account for either above a value of 100 pounds or a value of less than or equal to 200 pounds. 
	{
		if (distance <= 1000)
		{
			distanceMath = 1;
		}
		else if (distance > 1000)
		{
			distanceMath = ((distance + 999) / 1000);
		}
		price = 20.00; //Price for a weight above 100 pounds, but less than or equal to 200 pounds. 
		calc2 = distanceMath * price; //Final dollar calculation for the above conditions. 
		printf("Your total shipping cost is: $%.2f\n", calc2); //Print the contents of calc2 to the screen as the cost for the above conditions. 

	}

	system("pause");

}
