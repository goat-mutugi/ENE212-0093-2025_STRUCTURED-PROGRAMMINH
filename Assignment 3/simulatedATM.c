#include <stdio.h>
#include <stdbool.h>

//global constants and variables
const int CORRECT_PIN = 8999;
double balance = 1000.00;
//function to handle user login
int login() {
    int pin;
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &pin);

        if (pin == CORRECT_PIN) {
            printf("Login Successful!\n");
            return 1; // Return 1 means "True / Success"
        } else {
            attempts++;
            printf("Invalid PIN. Remaining attempts: %d\n\n", 3 - attempts);
        }
    }
    return 0; // Return 0 means "False / Failed"
}
//function that displays balance
void checkBalance(){
    printf("\nYour current balance is: %.2f\n", balance);

}

//function to handle deposits
void deposit(){
double amount;
    printf("\nEnter amount to deposit: $");
    scanf("%lf", &amount);

    //check if the input is a positive number
    if (amount<=0){
        printf("Error: Amount must be greater than 0!\n");
    }
    else{
    balance = balance + amount;
    printf("Successfully deposited $%.2lf\n", amount);

    }
}
    //function to handle withdrawals

    void withdraw(){
    double amount;
    printf("\nEnter amount to withdraw: $");
    scanf("%lf", &amount);
    //check if input is positive and if there is enough money

    if (amount <= 0){
        printf("Error: Amount must be greater than 0!\n");
    }
    else if(amount > balance){
        printf("Error: Insufficient funds! you only have $%.2lf\n", balance);
    }
    else {
        balance = balance - amount;
        printf("Successfully withdrew $%.2lf\n", amount);
    }
    }

    //The core driver program
int main(){
 int choice = 0;
  printf(" Welcome to the ATM system\n");

  //run the login function first, if it returns 0, the user is locked out
  if (login()==0){
    printf("Too many wrong attempts. System is locked!\n");
    return 0;
  }

   //main transaction loop
   while (choice!=4){
    printf("\n ATM MENU \n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    //call the matching function based on the user's choice
    if (choice == 1) {
            checkBalance();
        }
        else if (choice == 2) {
            deposit();
        }
        else if (choice == 3) {
            withdraw();
        }
        else if (choice == 4) {
            printf("\nThank you for using our ATM. Goodbye!\n");
        }
        else {
            printf("Invalid selection! Please choose an option from 1 to 4.\n");
        }

   }

    return 0;
}



