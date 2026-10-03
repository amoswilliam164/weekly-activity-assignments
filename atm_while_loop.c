/*
  Name    : Amos William
  Adm No  : BCS-03-0076/2026
  Course  : Computer Science
  Unit    : Structured Programming And Algorithms
  Program : ATM Withdrawal using ONLY a while loop
*/

#include <stdio.h>

int main(void) {
    int account_balance = 50000; // Starting balance KSh 50,000
    int withdrawal_amount;
    int attempt =1;

    printf("         ATM WITHDRAWAL SYSTEM     \n");
    
    printf("\nInitial Account Balance: KSh %d\n", account_balance);

	
    printf("\n  Withdrawal Attempt %d", attempt);
    printf("\nEnter withdrawal amount (0 to exit): ");
    scanf("%d", &withdrawal_amount);

    
    while (withdrawal_amount > 0 && withdrawal_amount <= account_balance) {
        
        // Deduction
        account_balance = account_balance - withdrawal_amount;

        // Display remaining balance
        printf("\nWithdrawal Successful!\n");
        printf("Remaining Balance: KSh %d\n\n", account_balance);
        attempt++;

        //looping process
        printf("\n  Withdrawal Attempt %d", attempt);
        printf("\nEnter withdrawal amount (0 to exit): ");
        scanf("%d", &withdrawal_amount);
        
    }

    // condition not met
    printf("\nProcess stopped. Final Account Balance: KSh %d\n", account_balance);

    return 0;
}