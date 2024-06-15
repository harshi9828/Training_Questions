#include <stdio.h>

int main()
{
    printf("Calculation of BMI");
    printf("\nEnter weight in pounds and height in inches");
    float w,h,BMI;
    scanf("%f%f",&w,&h);
    BMI=703*((w)/(h*h));
    if(BMI<18.5)
    printf("Underweight");
    else if(BMI>=18.5 && BMI<=24.9)
    printf("Normal weight");
    else if(BMI>=25 && BMI<=29.9)
    printf("Overweight");
    else if(BMI>30)
    printf("Obesity");
    
    
    

    return 0;
}


