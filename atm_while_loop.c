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

    // 1. Get the first withdrawal amount before entering the loop
    printf("\n  Withdrawal Attempt %d", attempt);
    printf("\nEnter withdrawal amount (0 to exit): ");
    scanf("%d", &withdrawal_amount);

    // 2. The loop runs AS LONG AS the balance is sufficient AND input is not 0
    while (withdrawal_amount > 0 && withdrawal_amount <= account_balance) {
        
        // Deduct withdrawal from current balance
        account_balance = account_balance - withdrawal_amount;

        // Display remaining balance after each successful withdrawal
        printf("\nWithdrawal Successful!\n");
        printf("Remaining Balance: KSh %d\n\n", account_balance);
        attempt++;

        // Ask for the NEXT withdrawal amount (keeps the process looping)
        printf("\n  Withdrawal Attempt %d", attempt);
        printf("\nEnter withdrawal amount (0 to exit): ");
        scanf("%d", &withdrawal_amount);
        
    }

    // 3. Process stops when 0 is entered or amount > available balance
    printf("\nProcess stopped. Final Account Balance: KSh %d\n", account_balance);

    return 0;
}