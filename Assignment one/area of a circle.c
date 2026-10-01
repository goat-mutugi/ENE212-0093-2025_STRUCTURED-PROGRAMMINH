#include <stdio.h>
int main()
{
    //variable declaration and initialisation
    double area;
    const double pi=3.142;
    double r;
    //capture input from user
    printf("please input the radius");
    scanf("%lf", &r);
    //calculate the area of the circle
    area=pi*r*r;
    printf("The area of the circle is %lf", area);
    return 0;
}
