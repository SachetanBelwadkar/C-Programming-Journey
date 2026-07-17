#include<stdio.h>

int main(){
    // Login variables
    char name[50];
    int correctpin = 1234;
    int attempts = 0;
    int enteredpin;
    int loggedin = 0;
    
    // ATM variables
    int choice;
    float balance = 5000.0;
    float deposit, withdraw;
    
    // Transaction history variables
    float transactions[10];
    int transactionCount = 0;

    // Login Screen
    printf("====================================\n");
    printf("       MINI ATM SYSTEM LOGIN\n");
    printf("====================================\n");
    printf("Enter Name: ");
    scanf(" %[^\n]", name);
    printf("Welcome, %s!\n\n", name);

    // PIN Verification (3 attempts)
    for (attempts = 0; attempts < 3; attempts++)
    {
        printf("Enter PIN: ");
        scanf("%d", &enteredpin);
        
        if (enteredpin == correctpin)
        {
            printf("Login Successful!\n");
            loggedin = 1;
            break;
        }
        else if (attempts < 2)
        {
            printf("Incorrect PIN! Attempts left: %d\n\n", 2 - attempts);
        }
    }
    
    // Main ATM System (if login successful)
    if (loggedin == 1)
    {
        printf("\n====================================\n");
        printf("Access Granted! Welcome to ATM\n");
        printf("====================================\n");
        
        // ATM Menu Loop
        do
        {
            printf("\n====================================\n");
            printf("          MINI ATM SYSTEM\n");
            printf("====================================\n");
            printf("1. Check Balance\n");
            printf("2. Deposit Money\n");
            printf("3. Withdraw Money\n");
            printf("4. View Transaction History\n");
            printf("5. Exit\n");
            printf("------------------------------------\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            
            // Option 1: Check Balance
            if (choice == 1)
            {
                printf("\n------------------------------------\n");
                printf("Your current balance: %.2f\n", balance);
                printf("------------------------------------\n");
            }
            
            // Option 2: Deposit Money
            else if (choice == 2)
            {
                printf("\nEnter amount to deposit: ");
                scanf("%f", &deposit);
                
                if (deposit > 0) {
                    balance = balance + deposit;
                    
                    // Store transaction
                    if (transactionCount < 10) {
                        transactions[transactionCount] = deposit;
                        transactionCount++;
                    }
                    
                    printf("Deposit successful!\n");
                    printf("Updated balance: %.2f\n", balance);
                }
                else {
                    printf("Invalid deposit amount!\n");
                }
            }
            
            // Option 3: Withdraw Money
            else if (choice == 3)
            {
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &withdraw);
                
                if (withdraw <= 0) {
                    printf("Invalid withdrawal amount!\n");
                }
                else if (withdraw > balance) {
                    printf("Insufficient balance!\n");
                    printf("Your balance: %.2f\n", balance);
                }
                else {
                    balance = balance - withdraw;
                    
                    // Store transaction
                    if (transactionCount < 10) {
                        transactions[transactionCount] = -withdraw;
                        transactionCount++;
                    }
                    
                    printf("Withdrawal successful!\n");
                    printf("Updated balance: %.2f\n", balance);
                }
            }
            
            // Option 4: Transaction History
            else if (choice == 4)
            {
                printf("\n====================================\n");
                printf("      TRANSACTION HISTORY\n");
                printf("====================================\n");
                
                if (transactionCount == 0) {
                    printf("No transactions yet.\n");
                }
                else {
                    for (int i = 0; i < transactionCount; i++) {
                        if (transactions[i] > 0) {
                            printf("%d. Deposit     : +%.2f\n", i + 1, transactions[i]);
                        }
                        else {
                            printf("%d. Withdrawal  : %.2f\n", i + 1, transactions[i]);
                        }
                    }
                }
                printf("====================================\n");
            }
            
            // Option 5: Exit
            else if (choice == 5)
            {
                printf("\n====================================\n");
                printf("Thank you for using Mini ATM System!\n");
                printf("====================================\n");
            }
            
            // Invalid choice
            else
            {
                printf("\nInvalid choice! Please try again.\n");
            }
            
        } while (choice != 5);
    }
    
    // Account Locked (if login failed)
    else
    {
        printf("\n====================================\n");
        printf("Account Locked! Too many attempts.\n");
        printf("====================================\n");
    }

    return 0;
}