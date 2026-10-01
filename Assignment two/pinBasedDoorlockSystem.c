#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring the variables
    int correctPin=8070;
    int myPin;
    int attempts=0;
    //prompt user to enter pin and run the decision
    do{
    printf("enter your pin");
    scanf("%d",&myPin);
    attempts++;
    if (myPin<=999||myPin>9999){
        printf("ERROR! Pin must be 4 digits\n");
    }
    else if(myPin==correctPin){
        printf("ACCESS GRANTED\n");
    }
    else{
        printf("ACCESS DENIED\n");
    }
    if (attempts<3){
        printf("Attempts remaining: %d\n\n", 3-attempts);
    }
    }
    while(attempts<3);
    printf("system locked! too many incorrect attempts.\n");


    return 0;
}
