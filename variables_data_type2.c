// variable and data types

#include <stdio.h>
int main(int argc, char** argv)
{
	// declare variables
	float height; //%f
	double bank_balance; //%lf
	char phone_number[20];//%s
	
	//prompt the user
	printf("Enter the height of the attendant:\t");
	scanf("%f", &height);
	
	printf("Enter the Bank balaance:          \t");
	scanf("%lf", &bank_balance);
	
	printf("Enter the phone number:           \t");
	scanf("%s", &phone_number);
	
	printf("\nThe height of the attendant is %.1f \n", height);
	printf("His Bank account balance is %.2lf \n", bank_balance);
	printf("And his Phone number is %s \n", phone_number);
	 
	return 0;
}