/* program to compute discount
amount>=10000 10% discount
amount between 5000 , 100000 5% discount
below 5000
*/

#include <stdio.h>
int main(int argc, char** argv)
{
	float amount, discount , amount_to_pay;
	
	printf("Enter the amount parchased: ");
	scanf("%f", &amount);
	
	if(amount>=10000){
	discount = 0.1 * amount;
	amount_to_pay = amount - discount;
	printf("discount = %.2f: \n",discount);
	printf("amount_to_pay = %.2f \n", amount_to_pay);
	
	}
	else if(amount>=5000&&amount<10000){
		discount = 0.05 * amount;
		amount_to_pay = amount - discount;
		printf("discount =%.2f \n", discount);
		printf("amount_to_pay = %.2f \n", amount_to_pay);
		
	}
	
	else
	{
		printf("No discount");
	}
		
	return 0;
}