#include <stdio.h>

int main()
{
    printf("Enter the temperature");
    float temp;
    scanf("%f",&temp);
    if(temp>30)
    printf("It's hot outside, stay hydrated");
    else if(temp>=20 && temp<=30)
    printf("The weather is nice and warm");
    else if(temp>=10 && temp<20)
    printf("t's a bit chilly, wear a jacket");
    else if(temp<10)
    printf("It's cold outside, stay warm");

    return 0;
}


