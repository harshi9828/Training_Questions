#include <stdio.h>
#define PI 3.14159

int main()
{
    printf("Enter the value of radius");
    float radius,area,circumference;
    scanf("%f",&radius);
    area= PI*radius*radius;
    printf("\nThe area of a circle is:- %f",area);
    circumference=2*PI*radius;
    printf("\nThe area of a circumference is:- %f",circumference);
    return 0;
    

}

