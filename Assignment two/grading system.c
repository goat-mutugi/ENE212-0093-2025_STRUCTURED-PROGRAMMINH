#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input student names
    //input student marks
    //check against the grading system
    //initializing and declaring variables
    char studentname[50];
    int marks;
    //taking input
    printf("please enter student name:\n");
    scanf("%s", studentname);
    printf("please enter student marks:\n");
    scanf("%d", &marks);
    if (marks<0||marks>100){
        printf("ERROR: score must be between 0 and 100\n");
    }
    //comparing input against grading system and printing the output
    switch (marks/10){
    case 10:
    case 9:
    case 8:
    case 7:
        printf("Grade A\n");
        break;

    case 6:
        printf("Grade B\n");
        break;

    case 5:
        printf("Grade C\n");
        break;

    case 4:
        printf("Grade D\n");
        break;

    default:
        printf("Grade Fail\n");
        break;

    }

    return 0;
}
