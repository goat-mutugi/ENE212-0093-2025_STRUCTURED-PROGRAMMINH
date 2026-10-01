#include <stdio.h>
#include <stdlib.h>

int main()
{

    //calculator program
    char operation = '\0';
    double num1;
    double num2;
    double result;

    //prompt user input and read the input
    printf("enter the first number");
    scanf("%lf", &num1);

    printf("enter the operator(+-*/)");
    scanf(" %c", &operation);

    printf("enter the second number");
    scanf("%lf", &num2);

    switch(operation){
case '+':
    result=num1+num2;
    break;

case '-':
    result=num1-num2;
    break;

case '*':
    result=num1*num2;
    break;

case '/':
    if(num2==0){
    printf("you can't divide by zero!!\n");
    }
    else{
    result=num1/num2;
    }
    break;
default:
    printf("invalid operation ");
    }

    printf("Result: %.4lf", result );
    return 0;
}
